#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_CoreType_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_DrillUpgradeLevel_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_RequestType_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_WristDockUpgradeType_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_GRToolType_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetInventoryResponse_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_CoreType_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_DrillUpgradeLevel_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_MothershipItemSummary_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_RequestType_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_WristDockUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__CollectSIIdol_d__82_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__CompleteSIBonus_d__81_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__CompleteSIQuest_d__80_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__GetActiveSIQuests_d__83_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__GetProgression_d__76_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__GetSIQuestStatus_d__84_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__IncrementSIResource_d__79_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__PurchaseResources_d__86_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__PurchaseTechPoints_d__85_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__RefreshProgressionTree_d__71_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__RefreshUserInventory_d__72_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__SetProgression_d__77_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager__UnlockNode_d__78_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__RotatingQuest_def.hpp"
#include "GlobalNamespace/zzzz__UserHydratedProgressionTreeResponse_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ProgressionManager> (*)()>(&::GlobalNamespace::ProgressionManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x596e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ProgressionManager*)>(&::GlobalNamespace::ProgressionManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x596e7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnTreeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action*)>(&::GlobalNamespace::ProgressionManager::add_OnTreeUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnTreeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnTreeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action*)>(&::GlobalNamespace::ProgressionManager::remove_OnTreeUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596e8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnTreeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnInventoryUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action*)>(&::GlobalNamespace::ProgressionManager::add_OnInventoryUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596e988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnInventoryUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnInventoryUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action*)>(&::GlobalNamespace::ProgressionManager::remove_OnInventoryUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x596ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnInventoryUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnTrackRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,int32_t>*)>(&::GlobalNamespace::ProgressionManager::add_OnTrackRead)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnTrackRead", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnTrackRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,int32_t>*)>(&::GlobalNamespace::ProgressionManager::remove_OnTrackRead)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596eb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnTrackRead", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnTrackSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,int32_t>*)>(&::GlobalNamespace::ProgressionManager::add_OnTrackSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596ec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnTrackSet", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnTrackSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,int32_t>*)>(&::GlobalNamespace::ProgressionManager::remove_OnTrackSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnTrackSet", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnNodeUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,::StringW>*)>(&::GlobalNamespace::ProgressionManager::add_OnNodeUnlocked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnNodeUnlocked", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnNodeUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,::StringW>*)>(&::GlobalNamespace::ProgressionManager::remove_OnNodeUnlocked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnNodeUnlocked", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnGetShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,int32_t>*)>(&::GlobalNamespace::ProgressionManager::add_OnGetShiftCredit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGetShiftCredit", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnGetShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_2<::StringW,int32_t>*)>(&::GlobalNamespace::ProgressionManager::remove_OnGetShiftCredit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGetShiftCredit", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnGetShiftCreditCapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_3<::StringW,int32_t,int32_t>*)>(&::GlobalNamespace::ProgressionManager::add_OnGetShiftCreditCapData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGetShiftCreditCapData", {}, {::i2c::type_of<::System::Action_3<::StringW,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnGetShiftCreditCapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_3<::StringW,int32_t,int32_t>*)>(&::GlobalNamespace::ProgressionManager::remove_OnGetShiftCreditCapData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGetShiftCreditCapData", {}, {::i2c::type_of<::System::Action_3<::StringW,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnPurchaseShiftCreditCapIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::add_OnPurchaseShiftCreditCapIncrease)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnPurchaseShiftCreditCapIncrease", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnPurchaseShiftCreditCapIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::remove_OnPurchaseShiftCreditCapIncrease)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnPurchaseShiftCreditCapIncrease", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnPurchaseShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::add_OnPurchaseShiftCredit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnPurchaseShiftCredit", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnPurchaseShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::remove_OnPurchaseShiftCredit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnPurchaseShiftCredit", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnChaosDepositSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::add_OnChaosDepositSuccess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnChaosDepositSuccess", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnChaosDepositSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::remove_OnChaosDepositSuccess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnChaosDepositSuccess", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnJucierStatusUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*)>(&::GlobalNamespace::ProgressionManager::add_OnJucierStatusUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnJucierStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnJucierStatusUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*)>(&::GlobalNamespace::ProgressionManager::remove_OnJucierStatusUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnJucierStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnPurchaseOverdrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::add_OnPurchaseOverdrive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnPurchaseOverdrive", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnPurchaseOverdrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::ProgressionManager::remove_OnPurchaseOverdrive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnPurchaseOverdrive", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnDockWristStatusUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*)>(&::GlobalNamespace::ProgressionManager::add_OnDockWristStatusUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnDockWristStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnDockWristStatusUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*)>(&::GlobalNamespace::ProgressionManager::remove_OnDockWristStatusUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnDockWristStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnGhostReactorStatsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*)>(&::GlobalNamespace::ProgressionManager::add_OnGhostReactorStatsUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGhostReactorStatsUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnGhostReactorStatsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*)>(&::GlobalNamespace::ProgressionManager::remove_OnGhostReactorStatsUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596fa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGhostReactorStatsUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.add_OnGhostReactorInventoryUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*)>(&::GlobalNamespace::ProgressionManager::add_OnGhostReactorInventoryUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGhostReactorInventoryUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.remove_OnGhostReactorInventoryUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*)>(&::GlobalNamespace::ProgressionManager::remove_OnGhostReactorInventoryUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x596fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGhostReactorInventoryUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x596fca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.RefreshProgressionTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::RefreshProgressionTree)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x596fd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RefreshProgressionTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.RefreshUserInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::RefreshUserInventory)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x596fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RefreshUserInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UserHydratedProgressionTreeResponse* (::GlobalNamespace::ProgressionManager::*)(::StringW)>(&::GlobalNamespace::ProgressionManager::GetTree)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x596fecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetTree", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetInventoryItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager::*)(::StringW, ::by_ref<::GlobalNamespace::ProgressionManager_MothershipItemSummary>)>(&::GlobalNamespace::ProgressionManager::GetInventoryItem)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x596ff3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetInventoryItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ProgressionManager_MothershipItemSummary>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetNodeCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProgressionManager::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::ProgressionManager::GetNodeCost)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x596ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetNodeCost", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW)>(&::GlobalNamespace::ProgressionManager::GetProgression)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5970430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetProgression", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.SetProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW, int32_t)>(&::GlobalNamespace::ProgressionManager::SetProgression)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59704f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SetProgression", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.UnlockNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::ProgressionManager::UnlockNode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59705bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"UnlockNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.IncrementSIResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::IncrementSIResource)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5970694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"IncrementSIResource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.CompleteSIQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(int32_t, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::CompleteSIQuest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5970788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"CompleteSIQuest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.CompleteSIBonus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::CompleteSIBonus)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5970870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"CompleteSIBonus", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.CollectSIIdol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::CollectSIIdol)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5970948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"CollectSIIdol", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetActiveSIQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::GetActiveSIQuests)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5970a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetActiveSIQuests", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetSIQuestStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::GetSIQuestStatus)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5970af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetSIQuestStatus", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseTechPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(int32_t, ::System::Action*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::PurchaseTechPoints)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5970bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseTechPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::PurchaseResources)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5970cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseResources", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseShiftCreditCapIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::PurchaseShiftCreditCapIncrease)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5970d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCreditCapIncrease", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseShiftCreditCapIncreaseInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(bool)>(&::GlobalNamespace::ProgressionManager::PurchaseShiftCreditCapIncreaseInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5970d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCreditCapIncreaseInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::PurchaseShiftCredit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5970f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCredit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseShiftCreditInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(bool)>(&::GlobalNamespace::ProgressionManager::PurchaseShiftCreditInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5970f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCreditInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW)>(&::GlobalNamespace::ProgressionManager::GetShiftCredit)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5971100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetShiftCredit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetJuicerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::GetJuicerStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59712b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetJuicerStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetJuicerStatusInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(bool)>(&::GlobalNamespace::ProgressionManager::GetJuicerStatusInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59712c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetJuicerStatusInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DepositCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_CoreType)>(&::GlobalNamespace::ProgressionManager::DepositCore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DepositCore", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_CoreType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DepositCoreInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_CoreType, bool)>(&::GlobalNamespace::ProgressionManager::DepositCoreInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5971478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DepositCoreInternal", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_CoreType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseOverdrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::PurchaseOverdrive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseOverdrive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseOverdriveInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(bool)>(&::GlobalNamespace::ProgressionManager::PurchaseOverdriveInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5971640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseOverdriveInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.SubtractShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(int32_t)>(&::GlobalNamespace::ProgressionManager::SubtractShiftCredit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59717f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SubtractShiftCredit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.SubtractShiftCreditInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(int32_t, bool)>(&::GlobalNamespace::ProgressionManager::SubtractShiftCreditInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59717f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SubtractShiftCreditInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.AdvanceDockWristUpgradeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_WristDockUpgradeType)>(&::GlobalNamespace::ProgressionManager::AdvanceDockWristUpgradeLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59719c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"AdvanceDockWristUpgradeLevel", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_WristDockUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.AdvanceDockWristUpgradeLevelInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_WristDockUpgradeType, bool)>(&::GlobalNamespace::ProgressionManager::AdvanceDockWristUpgradeLevelInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59719c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"AdvanceDockWristUpgradeLevelInternal", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_WristDockUpgradeType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetDockWristUpgradeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::GetDockWristUpgradeStatus)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5971b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetDockWristUpgradeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.PurchaseDrillUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel)>(&::GlobalNamespace::ProgressionManager::PurchaseDrillUpgrade)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5971d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseDrillUpgrade", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.RecycleTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::GRTool_GRToolType, int32_t)>(&::GlobalNamespace::ProgressionManager::RecycleTool)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5971ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RecycleTool", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.StartOfShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW, int32_t, int32_t, int32_t)>(&::GlobalNamespace::ProgressionManager::StartOfShift)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5972098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"StartOfShift", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.EndOfShiftReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW)>(&::GlobalNamespace::ProgressionManager::EndOfShiftReward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"EndOfShiftReward", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.EndOfShiftRewardInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW, bool)>(&::GlobalNamespace::ProgressionManager::EndOfShiftRewardInternal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5972284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"EndOfShiftRewardInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetGhostReactorStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::GetGhostReactorStats)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5972450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetGhostReactorStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetGhostReactorInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::GetGhostReactorInventory)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59725f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetGhostReactorInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.SetGhostReactorInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW)>(&::GlobalNamespace::ProgressionManager::SetGhostReactorInventory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5972798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SetGhostReactorInventory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.SetGhostReactorInventoryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW, bool)>(&::GlobalNamespace::ProgressionManager::SetGhostReactorInventoryInternal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x59727a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SetGhostReactorInventoryInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.HandleWebRequestFailures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager::*)(::UnityEngine::Networking::UnityWebRequest*, bool)>(&::GlobalNamespace::ProgressionManager::HandleWebRequestFailures)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5972974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"HandleWebRequestFailures", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GetProgressionRequest*)>(&::GlobalNamespace::ProgressionManager::DoGetProgression)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5972b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetProgression", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetProgressionRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoSetProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_SetProgressionRequest*)>(&::GlobalNamespace::ProgressionManager::DoSetProgression)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5972c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoSetProgression", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetProgressionRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoUnlockNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*)>(&::GlobalNamespace::ProgressionManager::DoUnlockNode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5972c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoUnlockNode", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UnlockNodeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoIncrementSIResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*, ::System::Action_1<::StringW>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoIncrementSIResource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5972d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoIncrementSIResource", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoQuestCompleteReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoQuestCompleteReward)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5972e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoQuestCompleteReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoBonusCompleteReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoBonusCompleteReward)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5972ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoBonusCompleteReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoIdolCollectReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoIdolCollectReward)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5972fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoIdolCollectReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetActiveSIQuests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*, ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoGetActiveSIQuests)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5973088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetActiveSIQuests", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetSIQuestsStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoGetSIQuestsStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5973168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetSIQuestsStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoPurchaseTechPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*, ::System::Action*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoPurchaseTechPoints)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5973248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseTechPoints", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoPurchaseResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*, ::System::Action_1<::StringW>*)>(&::GlobalNamespace::ProgressionManager::DoPurchaseResources)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5973328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseResources", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoPurchaseShiftCreditCapIncrease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*)>(&::GlobalNamespace::ProgressionManager::DoPurchaseShiftCreditCapIncrease)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5970ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseShiftCreditCapIncrease", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoPurchaseShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*)>(&::GlobalNamespace::ProgressionManager::DoPurchaseShiftCredit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5971078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*)>(&::GlobalNamespace::ProgressionManager::DoGetShiftCredit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5971230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetJuicerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*)>(&::GlobalNamespace::ProgressionManager::DoGetJuicerStatus)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59713e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetJuicerStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoDepositCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_DepositCoreRequest*)>(&::GlobalNamespace::ProgressionManager::DoDepositCore)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59715b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoDepositCore", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoPurchaseOverdrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*)>(&::GlobalNamespace::ProgressionManager::DoPurchaseOverdrive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5971768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseOverdrive", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoSubtractShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*)>(&::GlobalNamespace::ProgressionManager::DoSubtractShiftCredit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5971930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoSubtractShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoAdvanceDockWristUpgradeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*)>(&::GlobalNamespace::ProgressionManager::DoAdvanceDockWristUpgradeLevel)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5971b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoAdvanceDockWristUpgradeLevel", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetDockWristUpgradeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*)>(&::GlobalNamespace::ProgressionManager::DoGetDockWristUpgradeStatus)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5971ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetDockWristUpgradeStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoPurchaseDrillUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*)>(&::GlobalNamespace::ProgressionManager::DoPurchaseDrillUpgrade)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5971e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseDrillUpgrade", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoRecycleTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_RecycleToolRequest*)>(&::GlobalNamespace::ProgressionManager::DoRecycleTool)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5972008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoRecycleTool", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoStartOfShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*)>(&::GlobalNamespace::ProgressionManager::DoStartOfShift)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59721ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoStartOfShift", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoEndOfShiftReward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*)>(&::GlobalNamespace::ProgressionManager::DoEndOfShiftReward)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59723c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoEndOfShiftReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetGhostReactorStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*)>(&::GlobalNamespace::ProgressionManager::DoGetGhostReactorStats)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x597256c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetGhostReactorStats", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoGetGhostReactorInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*)>(&::GlobalNamespace::ProgressionManager::DoGetGhostReactorInventory)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5972710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetGhostReactorInventory", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.DoSetGhostReactorInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*)>(&::GlobalNamespace::ProgressionManager::DoSetGhostReactorInventory)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59728e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoSetGhostReactorInventory", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.IsSuccessResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager::*)(int64_t)>(&::GlobalNamespace::ProgressionManager::IsSuccessResponse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59735e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"IsSuccessResponse", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.OnGetTrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::GetProgressionTreesForPlayerResponse*)>(&::GlobalNamespace::ProgressionManager::OnGetTrees)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x59735f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"OnGetTrees", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.OnGetInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::MothershipGetInventoryResponse*)>(&::GlobalNamespace::ProgressionManager::OnGetInventory)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x59738e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"OnGetInventory", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetShinyRocksTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::GetShinyRocksTotal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5973d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetShinyRocksTotal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.RefreshShinyRocksTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::RefreshShinyRocksTotal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5973e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RefreshShinyRocksTotal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager.GetMothershipFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::ProgressionManager::GetMothershipFailure)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5973edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetMothershipFailure", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)()>(&::GlobalNamespace::ProgressionManager::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5973fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._RefreshProgressionTree_b__71_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::GetProgressionTreesForPlayerResponse*)>(&::GlobalNamespace::ProgressionManager::_RefreshProgressionTree_b__71_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshProgressionTree>b__71_0", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._RefreshProgressionTree_b__71_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::ProgressionManager::_RefreshProgressionTree_b__71_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x597414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshProgressionTree>b__71_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._RefreshUserInventory_b__72_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::MothershipGetInventoryResponse*)>(&::GlobalNamespace::ProgressionManager::_RefreshUserInventory_b__72_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597415c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshUserInventory>b__72_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._RefreshUserInventory_b__72_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::ProgressionManager::_RefreshUserInventory_b__72_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5974164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshUserInventory>b__72_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoGetProgression_b__114_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::StringW)>(&::GlobalNamespace::ProgressionManager::_DoGetProgression_b__114_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5974174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetProgression>b__114_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoSetProgression_b__115_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::ValueTuple_2<::StringW,int32_t>)>(&::GlobalNamespace::ProgressionManager::_DoSetProgression_b__115_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5974178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoSetProgression>b__115_0", {}, {::i2c::type_of<::System::ValueTuple_2<::StringW,int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoUnlockNode_b__116_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::System::ValueTuple_2<::StringW,::StringW>)>(&::GlobalNamespace::ProgressionManager::_DoUnlockNode_b__116_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoUnlockNode>b__116_0", {}, {::i2c::type_of<::System::ValueTuple_2<::StringW,::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoGetShiftCredit_b__127_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*)>(&::GlobalNamespace::ProgressionManager::_DoGetShiftCredit_b__127_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5974180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetShiftCredit>b__127_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoGetDockWristUpgradeStatus_b__133_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*)>(&::GlobalNamespace::ProgressionManager::_DoGetDockWristUpgradeStatus_b__133_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5974194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetDockWristUpgradeStatus>b__133_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoGetGhostReactorStats_b__138_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*)>(&::GlobalNamespace::ProgressionManager::_DoGetGhostReactorStats_b__138_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5974198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetGhostReactorStats>b__138_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager._DoGetGhostReactorInventory_b__139_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager::*)(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*)>(&::GlobalNamespace::ProgressionManager::_DoGetGhostReactorInventory_b__139_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597419c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetGhostReactorInventory>b__139_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnTreeUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTreeUpdated;
}
constexpr ::System::Action* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnTreeUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTreeUpdated;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnTreeUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTreeUpdated = value;
}
constexpr ::System::Action*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnInventoryUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInventoryUpdated;
}
constexpr ::System::Action* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnInventoryUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInventoryUpdated;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnInventoryUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnInventoryUpdated = value;
}
constexpr ::System::Action_2<::StringW,int32_t>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnTrackRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTrackRead;
}
constexpr ::System::Action_2<::StringW,int32_t>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnTrackRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTrackRead;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnTrackRead(::System::Action_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTrackRead = value;
}
constexpr ::System::Action_2<::StringW,int32_t>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnTrackSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTrackSet;
}
constexpr ::System::Action_2<::StringW,int32_t>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnTrackSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTrackSet;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnTrackSet(::System::Action_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTrackSet = value;
}
constexpr ::System::Action_2<::StringW,::StringW>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnNodeUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNodeUnlocked;
}
constexpr ::System::Action_2<::StringW,::StringW>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnNodeUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNodeUnlocked;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnNodeUnlocked(::System::Action_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNodeUnlocked = value;
}
constexpr ::System::Action_2<::StringW,int32_t>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGetShiftCredit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetShiftCredit;
}
constexpr ::System::Action_2<::StringW,int32_t>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGetShiftCredit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetShiftCredit;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnGetShiftCredit(::System::Action_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetShiftCredit = value;
}
constexpr ::System::Action_3<::StringW,int32_t,int32_t>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGetShiftCreditCapData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetShiftCreditCapData;
}
constexpr ::System::Action_3<::StringW,int32_t,int32_t>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGetShiftCreditCapData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGetShiftCreditCapData;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnGetShiftCreditCapData(::System::Action_3<::StringW,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGetShiftCreditCapData = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnPurchaseShiftCreditCapIncrease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPurchaseShiftCreditCapIncrease;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnPurchaseShiftCreditCapIncrease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPurchaseShiftCreditCapIncrease;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnPurchaseShiftCreditCapIncrease(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPurchaseShiftCreditCapIncrease = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnPurchaseShiftCredit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPurchaseShiftCredit;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnPurchaseShiftCredit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPurchaseShiftCredit;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnPurchaseShiftCredit(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPurchaseShiftCredit = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnChaosDepositSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnChaosDepositSuccess;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnChaosDepositSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnChaosDepositSuccess;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnChaosDepositSuccess(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnChaosDepositSuccess = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnJucierStatusUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnJucierStatusUpdated;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnJucierStatusUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnJucierStatusUpdated;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnJucierStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnJucierStatusUpdated = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnPurchaseOverdrive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPurchaseOverdrive;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnPurchaseOverdrive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPurchaseOverdrive;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnPurchaseOverdrive(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPurchaseOverdrive = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnDockWristStatusUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDockWristStatusUpdated;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnDockWristStatusUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDockWristStatusUpdated;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnDockWristStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDockWristStatusUpdated = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGhostReactorStatsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGhostReactorStatsUpdated;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGhostReactorStatsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGhostReactorStatsUpdated;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnGhostReactorStatsUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGhostReactorStatsUpdated = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGhostReactorInventoryUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGhostReactorInventoryUpdated;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_OnGhostReactorInventoryUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGhostReactorInventoryUpdated;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_OnGhostReactorInventoryUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGhostReactorInventoryUpdated = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>*& GlobalNamespace::ProgressionManager::__cordl_internal_get__trees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trees;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get__trees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trees;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__trees(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::UserHydratedProgressionTreeResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trees = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>*& GlobalNamespace::ProgressionManager::__cordl_internal_get__inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inventory;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get__inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inventory;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__inventory(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ProgressionManager_MothershipItemSummary>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inventory = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& GlobalNamespace::ProgressionManager::__cordl_internal_get__tracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get__tracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracks;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__tracks(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tracks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>*& GlobalNamespace::ProgressionManager::__cordl_internal_get_retryCounters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retryCounters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>* const& GlobalNamespace::ProgressionManager::__cordl_internal_get_retryCounters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retryCounters;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_retryCounters(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ProgressionManager_RequestType,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retryCounters = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager::__cordl_internal_get_maxRetriesOnFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager::__cordl_internal_get_maxRetriesOnFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set_maxRetriesOnFail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetriesOnFail = value;
}
constexpr double_t& GlobalNamespace::ProgressionManager::__cordl_internal_get__lastTreeRefreshTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTreeRefreshTime;
}
constexpr double_t const& GlobalNamespace::ProgressionManager::__cordl_internal_get__lastTreeRefreshTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTreeRefreshTime;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__lastTreeRefreshTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTreeRefreshTime = value;
}
constexpr double_t& GlobalNamespace::ProgressionManager::__cordl_internal_get__lastInventoryRefreshTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastInventoryRefreshTime;
}
constexpr double_t const& GlobalNamespace::ProgressionManager::__cordl_internal_get__lastInventoryRefreshTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastInventoryRefreshTime;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__lastInventoryRefreshTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastInventoryRefreshTime = value;
}
constexpr bool& GlobalNamespace::ProgressionManager::__cordl_internal_get__treeRefreshInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeRefreshInFlight;
}
constexpr bool const& GlobalNamespace::ProgressionManager::__cordl_internal_get__treeRefreshInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeRefreshInFlight;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__treeRefreshInFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____treeRefreshInFlight = value;
}
constexpr bool& GlobalNamespace::ProgressionManager::__cordl_internal_get__inventoryRefreshInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inventoryRefreshInFlight;
}
constexpr bool const& GlobalNamespace::ProgressionManager::__cordl_internal_get__inventoryRefreshInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inventoryRefreshInFlight;
}
constexpr void GlobalNamespace::ProgressionManager::__cordl_internal_set__inventoryRefreshInFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inventoryRefreshInFlight = value;
}
inline void GlobalNamespace::ProgressionManager::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ProgressionManager>, "<Instance>k__BackingField", ::GlobalNamespace::ProgressionManager*>(std::forward<::UnityW<::GlobalNamespace::ProgressionManager>>(value));
}
inline ::UnityW<::GlobalNamespace::ProgressionManager> GlobalNamespace::ProgressionManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ProgressionManager>, "<Instance>k__BackingField", ::GlobalNamespace::ProgressionManager*>();
}
inline void GlobalNamespace::ProgressionManager::setStaticF_debug_refreshTreeCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "debug_refreshTreeCount", ::GlobalNamespace::ProgressionManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ProgressionManager::getStaticF_debug_refreshTreeCount()  {
return ::cordl_internals::getStaticField<int32_t, "debug_refreshTreeCount", ::GlobalNamespace::ProgressionManager*>();
}
inline void GlobalNamespace::ProgressionManager::setStaticF_debug_refreshInventoryCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "debug_refreshInventoryCount", ::GlobalNamespace::ProgressionManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ProgressionManager::getStaticF_debug_refreshInventoryCount()  {
return ::cordl_internals::getStaticField<int32_t, "debug_refreshInventoryCount", ::GlobalNamespace::ProgressionManager*>();
}
inline void GlobalNamespace::ProgressionManager::setStaticF_debug_refreshTreeDroppedByThrottle(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "debug_refreshTreeDroppedByThrottle", ::GlobalNamespace::ProgressionManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ProgressionManager::getStaticF_debug_refreshTreeDroppedByThrottle()  {
return ::cordl_internals::getStaticField<int32_t, "debug_refreshTreeDroppedByThrottle", ::GlobalNamespace::ProgressionManager*>();
}
inline void GlobalNamespace::ProgressionManager::setStaticF_debug_refreshInventoryDroppedByThrottle(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "debug_refreshInventoryDroppedByThrottle", ::GlobalNamespace::ProgressionManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ProgressionManager::getStaticF_debug_refreshInventoryDroppedByThrottle()  {
return ::cordl_internals::getStaticField<int32_t, "debug_refreshInventoryDroppedByThrottle", ::GlobalNamespace::ProgressionManager*>();
}
inline void GlobalNamespace::ProgressionManager::setStaticF_debug_lastRefreshTreeAttemptTime(double_t  value)  {
::cordl_internals::setStaticField<double_t, "debug_lastRefreshTreeAttemptTime", ::GlobalNamespace::ProgressionManager*>(std::forward<double_t>(value));
}
inline double_t GlobalNamespace::ProgressionManager::getStaticF_debug_lastRefreshTreeAttemptTime()  {
return ::cordl_internals::getStaticField<double_t, "debug_lastRefreshTreeAttemptTime", ::GlobalNamespace::ProgressionManager*>();
}
inline void GlobalNamespace::ProgressionManager::setStaticF_debug_lastRefreshInventoryAttemptTime(double_t  value)  {
::cordl_internals::setStaticField<double_t, "debug_lastRefreshInventoryAttemptTime", ::GlobalNamespace::ProgressionManager*>(std::forward<double_t>(value));
}
inline double_t GlobalNamespace::ProgressionManager::getStaticF_debug_lastRefreshInventoryAttemptTime()  {
return ::cordl_internals::getStaticField<double_t, "debug_lastRefreshInventoryAttemptTime", ::GlobalNamespace::ProgressionManager*>();
}
inline ::UnityW<::GlobalNamespace::ProgressionManager> GlobalNamespace::ProgressionManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ProgressionManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::set_Instance(::GlobalNamespace::ProgressionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnTreeUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnTreeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnTreeUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnTreeUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnInventoryUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnInventoryUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnInventoryUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnInventoryUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnTrackRead(::System::Action_2<::StringW,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnTrackRead", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnTrackRead(::System::Action_2<::StringW,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnTrackRead", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnTrackSet(::System::Action_2<::StringW,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnTrackSet", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnTrackSet(::System::Action_2<::StringW,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnTrackSet", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnNodeUnlocked(::System::Action_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnNodeUnlocked", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnNodeUnlocked(::System::Action_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnNodeUnlocked", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnGetShiftCredit(::System::Action_2<::StringW,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGetShiftCredit", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnGetShiftCredit(::System::Action_2<::StringW,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGetShiftCredit", {}, {::i2c::type_of<::System::Action_2<::StringW,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnGetShiftCreditCapData(::System::Action_3<::StringW,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGetShiftCreditCapData", {}, {::i2c::type_of<::System::Action_3<::StringW,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnGetShiftCreditCapData(::System::Action_3<::StringW,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGetShiftCreditCapData", {}, {::i2c::type_of<::System::Action_3<::StringW,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnPurchaseShiftCreditCapIncrease(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnPurchaseShiftCreditCapIncrease", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnPurchaseShiftCreditCapIncrease(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnPurchaseShiftCreditCapIncrease", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnPurchaseShiftCredit(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnPurchaseShiftCredit", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnPurchaseShiftCredit(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnPurchaseShiftCredit", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnChaosDepositSuccess(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnChaosDepositSuccess", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnChaosDepositSuccess(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnChaosDepositSuccess", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnJucierStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnJucierStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnJucierStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnJucierStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnPurchaseOverdrive(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnPurchaseOverdrive", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnPurchaseOverdrive(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnPurchaseOverdrive", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnDockWristStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnDockWristStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnDockWristStatusUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnDockWristStatusUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnGhostReactorStatsUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGhostReactorStatsUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnGhostReactorStatsUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGhostReactorStatsUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::add_OnGhostReactorInventoryUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"add_OnGhostReactorInventoryUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::remove_OnGhostReactorInventoryUpdated(::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"remove_OnGhostReactorInventoryUpdated", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ProgressionManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::RefreshProgressionTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RefreshProgressionTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::RefreshUserInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RefreshUserInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UserHydratedProgressionTreeResponse* GlobalNamespace::ProgressionManager::GetTree(::StringW  treeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetTree", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserHydratedProgressionTreeResponse*>(this, ___internal_method, treeName);
}
inline bool GlobalNamespace::ProgressionManager::GetInventoryItem(::StringW  inventoryKey, ::by_ref<::GlobalNamespace::ProgressionManager_MothershipItemSummary>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetInventoryItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ProgressionManager_MothershipItemSummary>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inventoryKey, item);
}
inline int32_t GlobalNamespace::ProgressionManager::GetNodeCost(::StringW  treeName, ::StringW  nodeId, ::StringW  currencyKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetNodeCost", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, treeName, nodeId, currencyKey);
}
inline void GlobalNamespace::ProgressionManager::GetProgression(::StringW  trackId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetProgression", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackId);
}
inline void GlobalNamespace::ProgressionManager::SetProgression(::StringW  trackId, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SetProgression", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackId, progress);
}
inline void GlobalNamespace::ProgressionManager::UnlockNode(::StringW  treeId, ::StringW  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"UnlockNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeId, nodeId);
}
inline void GlobalNamespace::ProgressionManager::IncrementSIResource(::StringW  resourceName, ::System::Action_1<::StringW>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"IncrementSIResource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceName, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::CompleteSIQuest(int32_t  questID, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"CompleteSIQuest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, questID, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::CompleteSIBonus(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"CompleteSIBonus", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::CollectSIIdol(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"CollectSIIdol", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::GetActiveSIQuests(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetActiveSIQuests", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::GetSIQuestStatus(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetSIQuestStatus", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::PurchaseTechPoints(int32_t  amount, ::System::Action*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseTechPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::PurchaseResources(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseResources", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, OnSuccess, OnFailure);
}
inline void GlobalNamespace::ProgressionManager::PurchaseShiftCreditCapIncrease()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCreditCapIncrease", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::PurchaseShiftCreditCapIncreaseInternal(bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCreditCapIncreaseInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::PurchaseShiftCredit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCredit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::PurchaseShiftCreditInternal(bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseShiftCreditInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::GetShiftCredit(::StringW  mothershipId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetShiftCredit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mothershipId);
}
inline void GlobalNamespace::ProgressionManager::GetJuicerStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetJuicerStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::GetJuicerStatusInternal(bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetJuicerStatusInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::DepositCore(::GlobalNamespace::ProgressionManager_CoreType  coreType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DepositCore", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_CoreType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreType);
}
inline void GlobalNamespace::ProgressionManager::DepositCoreInternal(::GlobalNamespace::ProgressionManager_CoreType  coreType, bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DepositCoreInternal", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_CoreType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreType, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::PurchaseOverdrive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseOverdrive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::PurchaseOverdriveInternal(bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseOverdriveInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::SubtractShiftCredit(int32_t  creditsToSubtract)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SubtractShiftCredit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creditsToSubtract);
}
inline void GlobalNamespace::ProgressionManager::SubtractShiftCreditInternal(int32_t  creditsToSubtract, bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SubtractShiftCreditInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creditsToSubtract, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::AdvanceDockWristUpgradeLevel(::GlobalNamespace::ProgressionManager_WristDockUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"AdvanceDockWristUpgradeLevel", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_WristDockUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgrade);
}
inline void GlobalNamespace::ProgressionManager::AdvanceDockWristUpgradeLevelInternal(::GlobalNamespace::ProgressionManager_WristDockUpgradeType  upgrade, bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"AdvanceDockWristUpgradeLevelInternal", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_WristDockUpgradeType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgrade, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::GetDockWristUpgradeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetDockWristUpgradeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::PurchaseDrillUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"PurchaseDrillUpgrade", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DrillUpgradeLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgrade);
}
inline void GlobalNamespace::ProgressionManager::RecycleTool(::GlobalNamespace::GRTool_GRToolType  toolBeingRecycled, int32_t  numberOfPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RecycleTool", {}, {::i2c::type_of<::GlobalNamespace::GRTool_GRToolType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toolBeingRecycled, numberOfPlayers);
}
inline void GlobalNamespace::ProgressionManager::StartOfShift(::StringW  shiftId, int32_t  coresRequired, int32_t  numberOfPlayers, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"StartOfShift", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftId, coresRequired, numberOfPlayers, depth);
}
inline void GlobalNamespace::ProgressionManager::EndOfShiftReward(::StringW  shiftId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"EndOfShiftReward", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftId);
}
inline void GlobalNamespace::ProgressionManager::EndOfShiftRewardInternal(::StringW  shiftId, bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"EndOfShiftRewardInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftId, skipUserDataCache);
}
inline void GlobalNamespace::ProgressionManager::GetGhostReactorStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetGhostReactorStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::GetGhostReactorInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetGhostReactorInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::SetGhostReactorInventory(::StringW  jsonInventory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SetGhostReactorInventory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonInventory);
}
inline void GlobalNamespace::ProgressionManager::SetGhostReactorInventoryInternal(::StringW  jsonInventory, bool  skipUserDataCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"SetGhostReactorInventoryInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonInventory, skipUserDataCache);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::HandleWebRequestRetries(::GlobalNamespace::ProgressionManager_RequestType  requestType, T  data, ::System::Action_1<T>*  actionToTake, ::System::Action*  failureActionToTake)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                    {"HandleWebRequestRetries", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_RequestType>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, requestType, data, actionToTake, failureActionToTake);
}
inline bool GlobalNamespace::ProgressionManager::HandleWebRequestFailures(::UnityEngine::Networking::UnityWebRequest*  request, bool  retryOnConflict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"HandleWebRequestFailures", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request, retryOnConflict);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetProgression(::GlobalNamespace::ProgressionManager_GetProgressionRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetProgression", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetProgressionRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoSetProgression(::GlobalNamespace::ProgressionManager_SetProgressionRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoSetProgression", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetProgressionRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoUnlockNode(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoUnlockNode", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_UnlockNodeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoIncrementSIResource(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  data, ::System::Action_1<::StringW>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoIncrementSIResource", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoQuestCompleteReward(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoQuestCompleteReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoBonusCompleteReward(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoBonusCompleteReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoIdolCollectReward(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoIdolCollectReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetActiveSIQuests(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  data, ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetActiveSIQuests", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>(), ::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetSIQuestsStatus(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetSIQuestsStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoPurchaseTechPoints(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  data, ::System::Action*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseTechPoints", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoPurchaseResources(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  OnSuccess, ::System::Action_1<::StringW>*  OnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseResources", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, OnSuccess, OnFailure);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoPurchaseShiftCreditCapIncrease(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseShiftCreditCapIncrease", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoPurchaseShiftCredit(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetShiftCredit(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetJuicerStatus(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetJuicerStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoDepositCore(::GlobalNamespace::ProgressionManager_DepositCoreRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoDepositCore", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoPurchaseOverdrive(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseOverdrive", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoSubtractShiftCredit(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoSubtractShiftCredit", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoAdvanceDockWristUpgradeLevel(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoAdvanceDockWristUpgradeLevel", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetDockWristUpgradeStatus(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetDockWristUpgradeStatus", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoPurchaseDrillUpgrade(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoPurchaseDrillUpgrade", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoRecycleTool(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoRecycleTool", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoStartOfShift(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoStartOfShift", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoEndOfShiftReward(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoEndOfShiftReward", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetGhostReactorStats(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetGhostReactorStats", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoGetGhostReactorInventory(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoGetGhostReactorInventory", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager::DoSetGhostReactorInventory(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"DoSetGhostReactorInventory", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data);
}
inline bool GlobalNamespace::ProgressionManager::IsSuccessResponse(int64_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"IsSuccessResponse", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code);
}
template<typename T>
inline ::UnityEngine::Networking::UnityWebRequest* GlobalNamespace::ProgressionManager::FormatWebRequest(::StringW  url, T  pendingRequest, ::GlobalNamespace::ProgressionManager_RequestType  type)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                    {"FormatWebRequest", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>(), ::i2c::type_of<::GlobalNamespace::ProgressionManager_RequestType>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, url, pendingRequest, type);
}
inline void GlobalNamespace::ProgressionManager::OnGetTrees(::GlobalNamespace::GetProgressionTreesForPlayerResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"OnGetTrees", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::ProgressionManager::OnGetInventory(::GlobalNamespace::MothershipGetInventoryResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"OnGetInventory", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline int32_t GlobalNamespace::ProgressionManager::GetShinyRocksTotal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetShinyRocksTotal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::RefreshShinyRocksTotal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"RefreshShinyRocksTotal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::GetMothershipFailure(::GlobalNamespace::MothershipError*  callError, int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"GetMothershipFailure", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callError, errorCode);
}
inline void GlobalNamespace::ProgressionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager::_RefreshProgressionTree_b__71_0(::GlobalNamespace::GetProgressionTreesForPlayerResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshProgressionTree>b__71_0", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::ProgressionManager::_RefreshProgressionTree_b__71_1(::GlobalNamespace::MothershipError*  err, int32_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshProgressionTree>b__71_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err, code);
}
inline void GlobalNamespace::ProgressionManager::_RefreshUserInventory_b__72_0(::GlobalNamespace::MothershipGetInventoryResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshUserInventory>b__72_0", {}, {::i2c::type_of<::GlobalNamespace::MothershipGetInventoryResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::ProgressionManager::_RefreshUserInventory_b__72_1(::GlobalNamespace::MothershipError*  err, int32_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<RefreshUserInventory>b__72_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, err, code);
}
inline void GlobalNamespace::ProgressionManager::_DoGetProgression_b__114_0(::StringW  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetProgression>b__114_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager::_DoSetProgression_b__115_0(/* [TupleElementNames(new[] { "TrackId", "Progress" })] */ ::System::ValueTuple_2<::StringW,int32_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoSetProgression>b__115_0", {}, {::i2c::type_of<::System::ValueTuple_2<::StringW,int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager::_DoUnlockNode_b__116_0(/* [TupleElementNames(new[] { "TreeId", "NodeId" })] */ ::System::ValueTuple_2<::StringW,::StringW>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoUnlockNode>b__116_0", {}, {::i2c::type_of<::System::ValueTuple_2<::StringW,::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager::_DoGetShiftCredit_b__127_0(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetShiftCredit>b__127_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager::_DoGetDockWristUpgradeStatus_b__133_0(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetDockWristUpgradeStatus>b__133_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager::_DoGetGhostReactorStats_b__138_0(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetGhostReactorStats>b__138_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager::_DoGetGhostReactorInventory_b__139_0(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager*>(),
                        {"<DoGetGhostReactorInventory>b__139_0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager* GlobalNamespace::ProgressionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager::ProgressionManager()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::GlobalNamespace::ProgressionManager_RequestType& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_requestType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestType;
}
template<typename T>
constexpr ::GlobalNamespace::ProgressionManager_RequestType const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_requestType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestType;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set_requestType(::GlobalNamespace::ProgressionManager_RequestType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestType = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_actionToTake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionToTake;
}
template<typename T>
constexpr ::System::Action_1<T>* const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_actionToTake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionToTake;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set_actionToTake(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionToTake = value;
}
template<typename T>
constexpr T& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename T>
constexpr T const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set_data(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
template<typename T>
constexpr ::System::Action*& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_failureActionToTake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureActionToTake;
}
template<typename T>
constexpr ::System::Action* const& GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_get_failureActionToTake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureActionToTake;
}
template<typename T>
constexpr void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::__cordl_internal_set_failureActionToTake(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureActionToTake = value;
}
template<typename T>
inline void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>* GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T>
constexpr  GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ProgressionManager__HandleWebRequestRetries_d__112_1<T>::ProgressionManager__HandleWebRequestRetries_d__112_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597b644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::*)()>(&::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597b66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::*)()>(&::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::MoveNext)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x597b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::*)()>(&::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597b8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::*)()>(&::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597b8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::*)()>(&::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_UnlockNodeRequest*& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_UnlockNodeRequest* const& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_UnlockNodeRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116* GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoUnlockNode_d__116::ProgressionManager__DoUnlockNode_d__116()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597b258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::*)()>(&::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::*)()>(&::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::MoveNext)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x597b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::*)()>(&::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597b5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::*)()>(&::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597b604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::*)()>(&::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597b63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* const& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0* const& GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131* GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoSubtractShiftCredit_d__131::ProgressionManager__DoSubtractShiftCredit_d__131()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597af58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::*)()>(&::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597af80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::*)()>(&::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x597af84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::*)()>(&::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::*)()>(&::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597b218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::*)()>(&::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest* const& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0* const& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136* GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoStartOfShift_d__136::ProgressionManager__DoStartOfShift_d__136()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::*)()>(&::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597abf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::*)()>(&::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x597abfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::*)()>(&::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::*)()>(&::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597af18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::*)()>(&::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597af50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetProgressionRequest*& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetProgressionRequest* const& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetProgressionRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoSetProgression_d__115::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoSetProgression_d__115::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115* GlobalNamespace::ProgressionManager__DoSetProgression_d__115::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoSetProgression_d__115*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoSetProgression_d__115::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoSetProgression_d__115::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoSetProgression_d__115::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoSetProgression_d__115::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoSetProgression_d__115::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoSetProgression_d__115::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoSetProgression_d__115::ProgressionManager__DoSetProgression_d__115()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597a8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::*)()>(&::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597a8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::*)()>(&::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x597a8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::*)()>(&::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597ab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::*)()>(&::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::*)()>(&::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597abc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* const& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0* const& GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140* GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoSetGhostReactorInventory_d__140::ProgressionManager__DoSetGhostReactorInventory_d__140()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597a4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::*)()>(&::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597a510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::*)()>(&::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x597a514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::*)()>(&::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597a864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::*)()>(&::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597a86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::*)()>(&::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597a8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest*& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest* const& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0* const& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135* GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoRecycleTool_d__135::ProgressionManager__DoRecycleTool_d__135()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597a0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::*)()>(&::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597a0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::*)()>(&::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x597a0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::*)()>(&::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597a4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::*)()>(&::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597a4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::*)()>(&::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0* const& GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118* GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoQuestCompleteReward_d__118::ProgressionManager__DoQuestCompleteReward_d__118()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5979788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::MoveNext)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x597978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5979ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5979ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5979b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action*& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action* const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set_OnSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0* const& GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123* GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoPurchaseTechPoints_d__123::ProgressionManager__DoPurchaseTechPoints_d__123()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5979390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5979740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5979748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5979780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0* const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125* GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125::ProgressionManager__DoPurchaseShiftCreditCapIncrease_d__125()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5978f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::MoveNext)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5978f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5979344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597934c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5979384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0* const& GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126* GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoPurchaseShiftCredit_d__126::ProgressionManager__DoPurchaseShiftCredit_d__126()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59733e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5978b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5978b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5978ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>* const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0* const& GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124* GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoPurchaseResources_d__124::ProgressionManager__DoPurchaseResources_d__124()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59734d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::MoveNext)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5978770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5978ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0* const& GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130* GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoPurchaseOverdrive_d__130::ProgressionManager__DoPurchaseOverdrive_d__130()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597837c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5978380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597872c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::*)()>(&::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0* const& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134* GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoPurchaseDrillUpgrade_d__134::ProgressionManager__DoPurchaseDrillUpgrade_d__134()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5972de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::*)()>(&::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5977f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::*)()>(&::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5977f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::*)()>(&::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::*)()>(&::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x597833c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::*)()>(&::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set_OnSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0* const& GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117* GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoIncrementSIResource_d__117::ProgressionManager__DoIncrementSIResource_d__117()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::*)()>(&::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5977ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::*)()>(&::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5977ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::*)()>(&::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::*)()>(&::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5977f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::*)()>(&::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest* const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0* const& GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120* GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoIdolCollectReward_d__120::ProgressionManager__DoIdolCollectReward_d__120()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::*)()>(&::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5977890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::*)()>(&::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5977894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::*)()>(&::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::*)()>(&::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5977b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::*)()>(&::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest* const& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127* GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetShiftCredit_d__127::ProgressionManager__DoGetShiftCredit_d__127()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::*)()>(&::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59774b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::*)()>(&::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x59774bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::*)()>(&::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::*)()>(&::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5977850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::*)()>(&::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest* const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0* const& GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122* GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetSIQuestsStatus_d__122::ProgressionManager__DoGetSIQuestsStatus_d__122()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5972be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::*)()>(&::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5977134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::*)()>(&::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::MoveNext)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5977138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::*)()>(&::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::*)()>(&::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5977478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::*)()>(&::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59774b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GetProgressionRequest*& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GetProgressionRequest* const& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetProgressionRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetProgression_d__114::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetProgression_d__114::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114* GlobalNamespace::ProgressionManager__DoGetProgression_d__114::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetProgression_d__114*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetProgression_d__114::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetProgression_d__114::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetProgression_d__114::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetProgression_d__114::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetProgression_d__114::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetProgression_d__114::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetProgression_d__114::ProgressionManager__DoGetProgression_d__114()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::*)()>(&::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5976de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::*)()>(&::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::MoveNext)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5976de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::*)()>(&::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59770ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::*)()>(&::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59770f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::*)()>(&::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597712c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest* const& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0* const& GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128* GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetJuicerStatus_d__128::ProgressionManager__DoGetJuicerStatus_d__128()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5976b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5976b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5976da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest* const& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138* GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetGhostReactorStats_d__138::ProgressionManager__DoGetGhostReactorStats_d__138()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59735c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5976820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5976ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::*)()>(&::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest* const& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139* GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetGhostReactorInventory_d__139::ProgressionManager__DoGetGhostReactorInventory_d__139()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::*)()>(&::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5976538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::*)()>(&::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x597653c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::*)()>(&::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59767d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::*)()>(&::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59767dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::*)()>(&::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest* const& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133* GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetDockWristUpgradeStatus_d__133::ProgressionManager__DoGetDockWristUpgradeStatus_d__133()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::*)()>(&::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5976158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::*)()>(&::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::MoveNext)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x597615c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::*)()>(&::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59764f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::*)()>(&::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59764f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::*)()>(&::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>* const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set_OnSuccess(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest* const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0* const& GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121* GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoGetActiveSIQuests_d__121::ProgressionManager__DoGetActiveSIQuests_d__121()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5973570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::*)()>(&::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5975d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::*)()>(&::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::MoveNext)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5975d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::*)()>(&::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::*)()>(&::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5976118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::*)()>(&::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* const& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0* const& GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137* GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoEndOfShiftReward_d__137::ProgressionManager__DoEndOfShiftReward_d__137()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59734a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::*)()>(&::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::*)()>(&::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::MoveNext)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5975910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::*)()>(&::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5975cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::*)()>(&::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5975d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::*)()>(&::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5975d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_DepositCoreRequest*& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_DepositCoreRequest* const& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_DepositCoreRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0* const& GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoDepositCore_d__129::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoDepositCore_d__129::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129* GlobalNamespace::ProgressionManager__DoDepositCore_d__129::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoDepositCore_d__129*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoDepositCore_d__129::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoDepositCore_d__129::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoDepositCore_d__129::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoDepositCore_d__129::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoDepositCore_d__129::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoDepositCore_d__129::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoDepositCore_d__129::ProgressionManager__DoDepositCore_d__129()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5972f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::*)()>(&::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5975534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::*)()>(&::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5975538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::*)()>(&::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59758c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::*)()>(&::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59758cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::*)()>(&::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5975904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest* const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0* const& GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119* GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoBonusCompleteReward_d__119::ProgressionManager__DoBonusCompleteReward_d__119()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::*)(int32_t)>(&::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59734f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::*)()>(&::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59751b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::*)()>(&::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::MoveNext)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x59751b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::*)()>(&::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59754ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::*)()>(&::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59754f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::*)()>(&::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597552c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* const& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0* const& GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::__cordl_internal_set___8__1(::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132* GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132::ProgressionManager__DoAdvanceDockWristUpgradeLevel_d__132()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass140_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass140_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59748f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0._DoSetGhostReactorInventory_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass140_0::*)(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass140_0::_DoSetGhostReactorInventory_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59748f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*>(),
                        {"<DoSetGhostReactorInventory>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass140_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass140_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass140_0::_DoSetGhostReactorInventory_b__0(::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*>(),
                        {"<DoSetGhostReactorInventory>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0* GlobalNamespace::ProgressionManager___c__DisplayClass140_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass140_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass140_0::ProgressionManager___c__DisplayClass140_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass137_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass137_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0._DoEndOfShiftReward_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass137_0::*)(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass137_0::_DoEndOfShiftReward_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59748a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*>(),
                        {"<DoEndOfShiftReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass137_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass137_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass137_0::_DoEndOfShiftReward_b__0(::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*>(),
                        {"<DoEndOfShiftReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0* GlobalNamespace::ProgressionManager___c__DisplayClass137_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass137_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass137_0::ProgressionManager___c__DisplayClass137_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass136_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass136_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0._DoStartOfShift_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass136_0::*)(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass136_0::_DoStartOfShift_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x597486c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*>(),
                        {"<DoStartOfShift>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass136_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass136_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass136_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass136_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass136_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass136_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass136_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass136_0::_DoStartOfShift_b__0(::GlobalNamespace::ProgressionManager_StartOfShiftRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*>(),
                        {"<DoStartOfShift>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0* GlobalNamespace::ProgressionManager___c__DisplayClass136_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass136_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass136_0::ProgressionManager___c__DisplayClass136_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass135_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass135_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0._DoRecycleTool_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass135_0::*)(::GlobalNamespace::ProgressionManager_RecycleToolRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass135_0::_DoRecycleTool_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5974840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*>(),
                        {"<DoRecycleTool>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass135_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass135_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass135_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass135_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass135_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass135_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass135_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass135_0::_DoRecycleTool_b__0(::GlobalNamespace::ProgressionManager_RecycleToolRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*>(),
                        {"<DoRecycleTool>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0* GlobalNamespace::ProgressionManager___c__DisplayClass135_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass135_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass135_0::ProgressionManager___c__DisplayClass135_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass134_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass134_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597480c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0._DoPurchaseDrillUpgrade_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass134_0::*)(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass134_0::_DoPurchaseDrillUpgrade_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5974814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*>(),
                        {"<DoPurchaseDrillUpgrade>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass134_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass134_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass134_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass134_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass134_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass134_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass134_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass134_0::_DoPurchaseDrillUpgrade_b__0(::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*>(),
                        {"<DoPurchaseDrillUpgrade>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0* GlobalNamespace::ProgressionManager___c__DisplayClass134_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass134_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass134_0::ProgressionManager___c__DisplayClass134_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass132_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass132_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59747b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0._DoAdvanceDockWristUpgradeLevel_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass132_0::*)(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass132_0::_DoAdvanceDockWristUpgradeLevel_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59747bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*>(),
                        {"<DoAdvanceDockWristUpgradeLevel>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass132_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass132_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass132_0::_DoAdvanceDockWristUpgradeLevel_b__0(::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*>(),
                        {"<DoAdvanceDockWristUpgradeLevel>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0* GlobalNamespace::ProgressionManager___c__DisplayClass132_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass132_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass132_0::ProgressionManager___c__DisplayClass132_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass131_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass131_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597475c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0._DoSubtractShiftCredit_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass131_0::*)(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass131_0::_DoSubtractShiftCredit_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5974764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*>(),
                        {"<DoSubtractShiftCredit>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass131_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass131_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass131_0::_DoSubtractShiftCredit_b__0(::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*>(),
                        {"<DoSubtractShiftCredit>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0* GlobalNamespace::ProgressionManager___c__DisplayClass131_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass131_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass131_0::ProgressionManager___c__DisplayClass131_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass130_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass130_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597471c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0._DoPurchaseOverdrive_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass130_0::*)(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass130_0::_DoPurchaseOverdrive_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5974724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*>(),
                        {"<DoPurchaseOverdrive>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass130_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass130_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass130_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass130_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass130_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass130_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass130_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass130_0::_DoPurchaseOverdrive_b__0(::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*>(),
                        {"<DoPurchaseOverdrive>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0* GlobalNamespace::ProgressionManager___c__DisplayClass130_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass130_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass130_0::ProgressionManager___c__DisplayClass130_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass129_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass129_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59746c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0._DoDepositCore_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass129_0::*)(::GlobalNamespace::ProgressionManager_DepositCoreRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass129_0::_DoDepositCore_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59746d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*>(),
                        {"<DoDepositCore>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass129_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass129_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass129_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass129_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass129_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass129_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass129_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass129_0::_DoDepositCore_b__0(::GlobalNamespace::ProgressionManager_DepositCoreRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*>(),
                        {"<DoDepositCore>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0* GlobalNamespace::ProgressionManager___c__DisplayClass129_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass129_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass129_0::ProgressionManager___c__DisplayClass129_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass128_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass128_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0._DoGetJuicerStatus_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass128_0::*)(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass128_0::_DoGetJuicerStatus_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5974690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*>(),
                        {"<DoGetJuicerStatus>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass128_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass128_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass128_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass128_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass128_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass128_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass128_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass128_0::_DoGetJuicerStatus_b__0(::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*>(),
                        {"<DoGetJuicerStatus>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0* GlobalNamespace::ProgressionManager___c__DisplayClass128_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass128_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass128_0::ProgressionManager___c__DisplayClass128_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass126_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass126_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0._DoPurchaseShiftCredit_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass126_0::*)(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass126_0::_DoPurchaseShiftCredit_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5974650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*>(),
                        {"<DoPurchaseShiftCredit>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass126_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass126_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass126_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass126_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass126_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass126_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass126_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass126_0::_DoPurchaseShiftCredit_b__0(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*>(),
                        {"<DoPurchaseShiftCredit>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0* GlobalNamespace::ProgressionManager___c__DisplayClass126_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass126_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass126_0::ProgressionManager___c__DisplayClass126_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass125_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass125_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0._DoPurchaseShiftCreditCapIncrease_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass125_0::*)(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass125_0::_DoPurchaseShiftCreditCapIncrease_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5974610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*>(),
                        {"<DoPurchaseShiftCreditCapIncrease>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass125_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass125_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass125_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass125_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass125_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass125_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass125_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass125_0::_DoPurchaseShiftCreditCapIncrease_b__0(::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*>(),
                        {"<DoPurchaseShiftCreditCapIncrease>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0* GlobalNamespace::ProgressionManager___c__DisplayClass125_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass125_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass125_0::ProgressionManager___c__DisplayClass125_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59745a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0._DoPurchaseResources_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::*)(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::_DoPurchaseResources_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59745ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>(),
                        {"<DoPurchaseResources>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0._DoPurchaseResources_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::_DoPurchaseResources_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59745c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>(),
                        {"<DoPurchaseResources>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>* const& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserInventory*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::_DoPurchaseResources_b__0(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>(),
                        {"<DoPurchaseResources>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass124_0::_DoPurchaseResources_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>(),
                        {"<DoPurchaseResources>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0* GlobalNamespace::ProgressionManager___c__DisplayClass124_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass124_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass124_0::ProgressionManager___c__DisplayClass124_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0._DoPurchaseTechPoints_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::*)(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::_DoPurchaseTechPoints_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5974538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>(),
                        {"<DoPurchaseTechPoints>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0._DoPurchaseTechPoints_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::_DoPurchaseTechPoints_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5974564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>(),
                        {"<DoPurchaseTechPoints>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action*& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action* const& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_set_OnSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::_DoPurchaseTechPoints_b__0(::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>(),
                        {"<DoPurchaseTechPoints>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass123_0::_DoPurchaseTechPoints_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>(),
                        {"<DoPurchaseTechPoints>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0* GlobalNamespace::ProgressionManager___c__DisplayClass123_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass123_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass123_0::ProgressionManager___c__DisplayClass123_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59744cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0._DoGetSIQuestsStatus_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::*)(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::_DoGetSIQuestsStatus_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59744d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>(),
                        {"<DoGetSIQuestsStatus>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0._DoGetSIQuestsStatus_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::_DoGetSIQuestsStatus_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59744f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>(),
                        {"<DoGetSIQuestsStatus>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::_DoGetSIQuestsStatus_b__0(::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>(),
                        {"<DoGetSIQuestsStatus>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass122_0::_DoGetSIQuestsStatus_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>(),
                        {"<DoGetSIQuestsStatus>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0* GlobalNamespace::ProgressionManager___c__DisplayClass122_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass122_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass122_0::ProgressionManager___c__DisplayClass122_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0._DoGetActiveSIQuests_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::*)(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::_DoGetActiveSIQuests_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5974470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>(),
                        {"<DoGetActiveSIQuests>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0._DoGetActiveSIQuests_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::_DoGetActiveSIQuests_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x597448c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>(),
                        {"<DoGetActiveSIQuests>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>* const& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_set_OnSuccess(::System::Action_1<::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::_DoGetActiveSIQuests_b__0(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>(),
                        {"<DoGetActiveSIQuests>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass121_0::_DoGetActiveSIQuests_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>(),
                        {"<DoGetActiveSIQuests>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0* GlobalNamespace::ProgressionManager___c__DisplayClass121_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass121_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass121_0::ProgressionManager___c__DisplayClass121_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0._DoIdolCollectReward_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::*)(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::_DoIdolCollectReward_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x597440c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>(),
                        {"<DoIdolCollectReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0._DoIdolCollectReward_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::_DoIdolCollectReward_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5974428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>(),
                        {"<DoIdolCollectReward>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::_DoIdolCollectReward_b__0(::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>(),
                        {"<DoIdolCollectReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass120_0::_DoIdolCollectReward_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>(),
                        {"<DoIdolCollectReward>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0* GlobalNamespace::ProgressionManager___c__DisplayClass120_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass120_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass120_0::ProgressionManager___c__DisplayClass120_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59743a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0._DoBonusCompleteReward_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::*)(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::_DoBonusCompleteReward_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59743a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>(),
                        {"<DoBonusCompleteReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0._DoBonusCompleteReward_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::_DoBonusCompleteReward_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59743c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>(),
                        {"<DoBonusCompleteReward>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::_DoBonusCompleteReward_b__0(::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>(),
                        {"<DoBonusCompleteReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass119_0::_DoBonusCompleteReward_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>(),
                        {"<DoBonusCompleteReward>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0* GlobalNamespace::ProgressionManager___c__DisplayClass119_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass119_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass119_0::ProgressionManager___c__DisplayClass119_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597432c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0._DoQuestCompleteReward_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::*)(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::_DoQuestCompleteReward_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5974334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>(),
                        {"<DoQuestCompleteReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0._DoQuestCompleteReward_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::_DoQuestCompleteReward_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5974360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>(),
                        {"<DoQuestCompleteReward>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* const& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_set_OnSuccess(::System::Action_1<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::_DoQuestCompleteReward_b__0(::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>(),
                        {"<DoQuestCompleteReward>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass118_0::_DoQuestCompleteReward_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>(),
                        {"<DoQuestCompleteReward>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0* GlobalNamespace::ProgressionManager___c__DisplayClass118_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass118_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass118_0::ProgressionManager___c__DisplayClass118_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59742b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0._DoIncrementSIResource_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::*)(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*)>(&::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::_DoIncrementSIResource_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59742c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>(),
                        {"<DoIncrementSIResource>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0._DoIncrementSIResource_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::*)()>(&::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::_DoIncrementSIResource_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59742ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>(),
                        {"<DoIncrementSIResource>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ProgressionManager>& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ProgressionManager> const& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_set_data(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_OnSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_OnSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSuccess;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_set_OnSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSuccess = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_OnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_OnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFailure;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_set_OnFailure(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFailure = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::_DoIncrementSIResource_b__0(::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>(),
                        {"<DoIncrementSIResource>b__0", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline void GlobalNamespace::ProgressionManager___c__DisplayClass117_0::_DoIncrementSIResource_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>(),
                        {"<DoIncrementSIResource>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0* GlobalNamespace::ProgressionManager___c__DisplayClass117_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager___c__DisplayClass117_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager___c__DisplayClass117_0::ProgressionManager___c__DisplayClass117_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::*)()>(&::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59742b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
inline void GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse* GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryResponse::ProgressionManager_SetGhostReactorInventoryResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::*)()>(&::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59728dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::__cordl_internal_get_InventoryJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InventoryJson;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::__cordl_internal_get_InventoryJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InventoryJson;
}
constexpr void GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::__cordl_internal_set_InventoryJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InventoryJson = value;
}
inline void GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest* GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetGhostReactorInventoryRequest::ProgressionManager_SetGhostReactorInventoryRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::*)()>(&::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59742a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::__cordl_internal_get_InventoryJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InventoryJson;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::__cordl_internal_get_InventoryJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InventoryJson;
}
constexpr void GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::__cordl_internal_set_InventoryJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InventoryJson = value;
}
inline void GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse* GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorInventoryResponse::ProgressionManager_GhostReactorInventoryResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest::*)()>(&::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5972708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest* GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorInventoryRequest::ProgressionManager_GhostReactorInventoryRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::*)()>(&::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59742a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::__cordl_internal_get_MaxDepthReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDepthReached;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::__cordl_internal_get_MaxDepthReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDepthReached;
}
constexpr void GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::__cordl_internal_set_MaxDepthReached(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDepthReached = value;
}
inline void GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse* GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorStatsResponse::ProgressionManager_GhostReactorStatsResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest::*)()>(&::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5972564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_GhostReactorStatsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest* GlobalNamespace::ProgressionManager_GhostReactorStatsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GhostReactorStatsRequest::ProgressionManager_GhostReactorStatsRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::*)()>(&::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59723c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::__cordl_internal_get_ShiftId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::__cordl_internal_get_ShiftId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftId;
}
constexpr void GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::__cordl_internal_set_ShiftId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShiftId = value;
}
inline void GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest* GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_EndOfShiftRewardRequest::ProgressionManager_EndOfShiftRewardRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_StartOfShiftRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_StartOfShiftRequest::*)()>(&::GlobalNamespace::ProgressionManager_StartOfShiftRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59721e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_ShiftId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_ShiftId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftId;
}
constexpr void GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_set_ShiftId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShiftId = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_CoresRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoresRequired;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_CoresRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoresRequired;
}
constexpr void GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_set_CoresRequired(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoresRequired = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_NumberOfPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfPlayers;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_NumberOfPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfPlayers;
}
constexpr void GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_set_NumberOfPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumberOfPlayers = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_Depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Depth;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_get_Depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Depth;
}
constexpr void GlobalNamespace::ProgressionManager_StartOfShiftRequest::__cordl_internal_set_Depth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Depth = value;
}
inline void GlobalNamespace::ProgressionManager_StartOfShiftRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_StartOfShiftRequest* GlobalNamespace::ProgressionManager_StartOfShiftRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_StartOfShiftRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_StartOfShiftRequest::ProgressionManager_StartOfShiftRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_RecycleToolRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_RecycleToolRequest::*)()>(&::GlobalNamespace::ProgressionManager_RecycleToolRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5972000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRTool_GRToolType& GlobalNamespace::ProgressionManager_RecycleToolRequest::__cordl_internal_get_ToolBeingRecycled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolBeingRecycled;
}
constexpr ::GlobalNamespace::GRTool_GRToolType const& GlobalNamespace::ProgressionManager_RecycleToolRequest::__cordl_internal_get_ToolBeingRecycled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ToolBeingRecycled;
}
constexpr void GlobalNamespace::ProgressionManager_RecycleToolRequest::__cordl_internal_set_ToolBeingRecycled(::GlobalNamespace::GRTool_GRToolType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ToolBeingRecycled = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_RecycleToolRequest::__cordl_internal_get_NumberOfPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfPlayers;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_RecycleToolRequest::__cordl_internal_get_NumberOfPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfPlayers;
}
constexpr void GlobalNamespace::ProgressionManager_RecycleToolRequest::__cordl_internal_set_NumberOfPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumberOfPlayers = value;
}
inline void GlobalNamespace::ProgressionManager_RecycleToolRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_RecycleToolRequest* GlobalNamespace::ProgressionManager_RecycleToolRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_RecycleToolRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_RecycleToolRequest::ProgressionManager_RecycleToolRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse* GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeResponse::ProgressionManager_PurchaseDrillUpgradeResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel& GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::__cordl_internal_get_Upgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade;
}
constexpr ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel const& GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::__cordl_internal_get_Upgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::__cordl_internal_set_Upgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Upgrade = value;
}
inline void GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest* GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseDrillUpgradeRequest::ProgressionManager_PurchaseDrillUpgradeRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_DockWristStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_DockWristStatusResponse::*)()>(&::GlobalNamespace::ProgressionManager_DockWristStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_CurrentUpgrade1Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentUpgrade1Level;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_CurrentUpgrade1Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentUpgrade1Level;
}
constexpr void GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_set_CurrentUpgrade1Level(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentUpgrade1Level = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_CurrentUpgrade2Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentUpgrade2Level;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_CurrentUpgrade2Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentUpgrade2Level;
}
constexpr void GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_set_CurrentUpgrade2Level(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentUpgrade2Level = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_CurrentUpgrade3Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentUpgrade3Level;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_CurrentUpgrade3Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentUpgrade3Level;
}
constexpr void GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_set_CurrentUpgrade3Level(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentUpgrade3Level = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_Upgrade1LevelMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade1LevelMax;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_Upgrade1LevelMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade1LevelMax;
}
constexpr void GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_set_Upgrade1LevelMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Upgrade1LevelMax = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_Upgrade2LevelMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade2LevelMax;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_Upgrade2LevelMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade2LevelMax;
}
constexpr void GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_set_Upgrade2LevelMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Upgrade2LevelMax = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_Upgrade3LevelMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade3LevelMax;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_get_Upgrade3LevelMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade3LevelMax;
}
constexpr void GlobalNamespace::ProgressionManager_DockWristStatusResponse::__cordl_internal_set_Upgrade3LevelMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Upgrade3LevelMax = value;
}
inline void GlobalNamespace::ProgressionManager_DockWristStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_DockWristStatusResponse* GlobalNamespace::ProgressionManager_DockWristStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_DockWristStatusResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_DockWristStatusResponse::ProgressionManager_DockWristStatusResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest::*)()>(&::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest* GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_DockWristUpgradeStatusRequest::ProgressionManager_DockWristUpgradeStatusRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::*)()>(&::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionManager_WristDockUpgradeType& GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::__cordl_internal_get_Upgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade;
}
constexpr ::GlobalNamespace::ProgressionManager_WristDockUpgradeType const& GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::__cordl_internal_get_Upgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Upgrade;
}
constexpr void GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::__cordl_internal_set_Upgrade(::GlobalNamespace::ProgressionManager_WristDockUpgradeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Upgrade = value;
}
inline void GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest* GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_AdvanceDockWristUpgradeRequest::ProgressionManager_AdvanceDockWristUpgradeRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::*)()>(&::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::__cordl_internal_get_ShiftCreditToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftCreditToRemove;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::__cordl_internal_get_ShiftCreditToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftCreditToRemove;
}
constexpr void GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::__cordl_internal_set_ShiftCreditToRemove(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShiftCreditToRemove = value;
}
inline void GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest* GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SubtractShiftCreditRequest::ProgressionManager_SubtractShiftCreditRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_JuicerStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_JuicerStatusResponse::*)()>(&::GlobalNamespace::ProgressionManager_JuicerStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CurrentCoreCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentCoreCount;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CurrentCoreCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentCoreCount;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_CurrentCoreCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentCoreCount = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CoreProcessingTimeSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreProcessingTimeSec;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CoreProcessingTimeSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreProcessingTimeSec;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_CoreProcessingTimeSec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoreProcessingTimeSec = value;
}
constexpr float_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CoreProcessingPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreProcessingPercent;
}
constexpr float_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CoreProcessingPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreProcessingPercent;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_CoreProcessingPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoreProcessingPercent = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_OverdriveSupply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverdriveSupply;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_OverdriveSupply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverdriveSupply;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_OverdriveSupply(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverdriveSupply = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_OverdriveCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverdriveCap;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_OverdriveCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverdriveCap;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_OverdriveCap(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverdriveCap = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CoresProcessedByOverdrive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoresProcessedByOverdrive;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_CoresProcessedByOverdrive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoresProcessedByOverdrive;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_CoresProcessedByOverdrive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoresProcessedByOverdrive = value;
}
constexpr bool& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_RefreshJuice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RefreshJuice;
}
constexpr bool const& GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_get_RefreshJuice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RefreshJuice;
}
constexpr void GlobalNamespace::ProgressionManager_JuicerStatusResponse::__cordl_internal_set_RefreshJuice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RefreshJuice = value;
}
inline void GlobalNamespace::ProgressionManager_JuicerStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_JuicerStatusResponse* GlobalNamespace::ProgressionManager_JuicerStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_JuicerStatusResponse::ProgressionManager_JuicerStatusResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest* GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseOverdriveRequest::ProgressionManager_PurchaseOverdriveRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_DepositCoreResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_DepositCoreResponse::*)()>(&::GlobalNamespace::ProgressionManager_DepositCoreResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DepositCoreResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_get_CurrentShiftCredits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCredits;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_get_CurrentShiftCredits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCredits;
}
constexpr void GlobalNamespace::ProgressionManager_DepositCoreResponse::__cordl_internal_set_CurrentShiftCredits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCredits = value;
}
inline void GlobalNamespace::ProgressionManager_DepositCoreResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DepositCoreResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_DepositCoreResponse* GlobalNamespace::ProgressionManager_DepositCoreResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_DepositCoreResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_DepositCoreResponse::ProgressionManager_DepositCoreResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_DepositCoreRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_DepositCoreRequest::*)()>(&::GlobalNamespace::ProgressionManager_DepositCoreRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59715a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionManager_CoreType& GlobalNamespace::ProgressionManager_DepositCoreRequest::__cordl_internal_get_CoreBeingDeposited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreBeingDeposited;
}
constexpr ::GlobalNamespace::ProgressionManager_CoreType const& GlobalNamespace::ProgressionManager_DepositCoreRequest::__cordl_internal_get_CoreBeingDeposited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreBeingDeposited;
}
constexpr void GlobalNamespace::ProgressionManager_DepositCoreRequest::__cordl_internal_set_CoreBeingDeposited(::GlobalNamespace::ProgressionManager_CoreType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoreBeingDeposited = value;
}
inline void GlobalNamespace::ProgressionManager_DepositCoreRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_DepositCoreRequest* GlobalNamespace::ProgressionManager_DepositCoreRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_DepositCoreRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_DepositCoreRequest::ProgressionManager_DepositCoreRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest::*)()>(&::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59713e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_GetJuicerStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest* GlobalNamespace::ProgressionManager_GetJuicerStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetJuicerStatusRequest::ProgressionManager_GetJuicerStatusRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_ShiftCreditResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_ShiftCreditResponse::*)()>(&::GlobalNamespace::ProgressionManager_ShiftCreditResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_ShiftCreditResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_CurrentShiftCredits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCredits;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_CurrentShiftCredits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCredits;
}
constexpr void GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_set_CurrentShiftCredits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCredits = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_CurrentShiftCreditCapIncreases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreases;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_CurrentShiftCreditCapIncreases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreases;
}
constexpr void GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_set_CurrentShiftCreditCapIncreases(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCreditCapIncreases = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_CurrentShiftCreditCapIncreasesMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreasesMax;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_CurrentShiftCreditCapIncreasesMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreasesMax;
}
constexpr void GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_set_CurrentShiftCreditCapIncreasesMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCreditCapIncreasesMax = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_TargetMothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_get_TargetMothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_ShiftCreditResponse::__cordl_internal_set_TargetMothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetMothershipId = value;
}
inline void GlobalNamespace::ProgressionManager_ShiftCreditResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_ShiftCreditResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_ShiftCreditResponse* GlobalNamespace::ProgressionManager_ShiftCreditResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_ShiftCreditResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_ShiftCreditResponse::ProgressionManager_ShiftCreditResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetShiftCreditRequest::*)()>(&::GlobalNamespace::ProgressionManager_GetShiftCreditRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_GetShiftCreditRequest::__cordl_internal_get_TargetMothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GetShiftCreditRequest::__cordl_internal_get_TargetMothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_GetShiftCreditRequest::__cordl_internal_set_TargetMothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetMothershipId = value;
}
inline void GlobalNamespace::ProgressionManager_GetShiftCreditRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest* GlobalNamespace::ProgressionManager_GetShiftCreditRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetShiftCreditRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetShiftCreditRequest::ProgressionManager_GetShiftCreditRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_CurrentShiftCredits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCredits;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_CurrentShiftCredits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCredits;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_set_CurrentShiftCredits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCredits = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_TargetMothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_get_TargetMothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::__cordl_internal_set_TargetMothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetMothershipId = value;
}
inline void GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse* GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditResponse::ProgressionManager_PurchaseShiftCreditResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5971070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest* GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditRequest::ProgressionManager_PurchaseShiftCreditRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_CurrentShiftCreditCapIncreases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreases;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_CurrentShiftCreditCapIncreases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreases;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_set_CurrentShiftCreditCapIncreases(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCreditCapIncreases = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_CurrentShiftCreditCapIncreasesMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreasesMax;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_CurrentShiftCreditCapIncreasesMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentShiftCreditCapIncreasesMax;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_set_CurrentShiftCreditCapIncreasesMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentShiftCreditCapIncreasesMax = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_TargetMothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_get_TargetMothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetMothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::__cordl_internal_set_TargetMothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetMothershipId = value;
}
inline void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse* GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse::ProgressionManager_PurchaseShiftCreditCapIncreaseResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5970eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest* GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest::ProgressionManager_PurchaseShiftCreditCapIncreaseRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::*)()>(&::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_get_TodayClaimableQuests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TodayClaimableQuests;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_get_TodayClaimableQuests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TodayClaimableQuests;
}
constexpr void GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_set_TodayClaimableQuests(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TodayClaimableQuests = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_get_TodayClaimableBonus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TodayClaimableBonus;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_get_TodayClaimableBonus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TodayClaimableBonus;
}
constexpr void GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_set_TodayClaimableBonus(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TodayClaimableBonus = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_get_TodayClaimableIdol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TodayClaimableIdol;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_get_TodayClaimableIdol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TodayClaimableIdol;
}
constexpr void GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::__cordl_internal_set_TodayClaimableIdol(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TodayClaimableIdol = value;
}
inline void GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse::ProgressionManager_UserQuestsStatusResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::*)()>(&::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::__cordl_internal_get_SkipUserDataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipUserDataCache;
}
constexpr bool const& GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::__cordl_internal_get_SkipUserDataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipUserDataCache;
}
constexpr void GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::__cordl_internal_set_SkipUserDataCache(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipUserDataCache = value;
}
inline void GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest* GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest::ProgressionManager_MothershipUserDataWriteRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest::*)()>(&::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest* GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetSIIdolCollectRequest::ProgressionManager_SetSIIdolCollectRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest::*)()>(&::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest* GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetSIBonusCompleteRequest::ProgressionManager_SetSIBonusCompleteRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::*)()>(&::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::__cordl_internal_get_QuestID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestID;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::__cordl_internal_get_QuestID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QuestID;
}
constexpr void GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::__cordl_internal_set_QuestID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QuestID = value;
}
inline void GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest* GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetSIQuestCompleteRequest::ProgressionManager_SetSIQuestCompleteRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_RewardRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_RewardRequest::*)()>(&::GlobalNamespace::ProgressionManager_RewardRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_RewardRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_RewardRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_RewardRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_RewardRequest* GlobalNamespace::ProgressionManager_RewardRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_RewardRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_RewardRequest::ProgressionManager_RewardRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_UserInventory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_UserInventory::*)()>(&::GlobalNamespace::ProgressionManager_UserInventory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UserInventory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& GlobalNamespace::ProgressionManager_UserInventory::__cordl_internal_get_Inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& GlobalNamespace::ProgressionManager_UserInventory::__cordl_internal_get_Inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr void GlobalNamespace::ProgressionManager_UserInventory::__cordl_internal_set_Inventory(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Inventory = value;
}
inline void GlobalNamespace::ProgressionManager_UserInventory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UserInventory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_UserInventory* GlobalNamespace::ProgressionManager_UserInventory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_UserInventory*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_UserInventory::ProgressionManager_UserInventory()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::*)()>(&::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*& GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr ::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse* const& GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr void GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::__cordl_internal_set_Result(::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
inline void GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse* GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusResponse::ProgressionManager_GetSIQuestsStatusResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_PurchaseResourcesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* GlobalNamespace::ProgressionManager_PurchaseResourcesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest::ProgressionManager_PurchaseResourcesRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::*)()>(&::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::__cordl_internal_get_TechPointsAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TechPointsAmount;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::__cordl_internal_get_TechPointsAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TechPointsAmount;
}
constexpr void GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::__cordl_internal_set_TechPointsAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TechPointsAmount = value;
}
inline void GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest* GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_PurchaseTechPointsRequest::ProgressionManager_PurchaseTechPointsRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest::*)()>(&::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest* GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_ResetSIQuestsStatusRequest::ProgressionManager_ResetSIQuestsStatusRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest::*)()>(&::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest* GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetSIQuestsStatusRequest::ProgressionManager_GetSIQuestsStatusRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::*)()>(&::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::__cordl_internal_get_Quests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>* const& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::__cordl_internal_get_Quests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quests;
}
constexpr void GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::__cordl_internal_set_Quests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quests = value;
}
inline void GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult* GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult::ProgressionManager_GetActiveSIQuestsResult()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::*)()>(&::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult* const& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr void GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_set_Result(::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse* GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsResponse::ProgressionManager_GetActiveSIQuestsResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest::*)()>(&::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest* GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetActiveSIQuestsRequest::ProgressionManager_GetActiveSIQuestsRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::*)()>(&::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::__cordl_internal_get_ResourceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourceType;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::__cordl_internal_get_ResourceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourceType;
}
constexpr void GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::__cordl_internal_set_ResourceType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResourceType = value;
}
inline void GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse* GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceResponse::ProgressionManager_IncrementSIResourceResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_UserInventoryResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_UserInventoryResponse::*)()>(&::GlobalNamespace::ProgressionManager_UserInventoryResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UserInventoryResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ProgressionManager_UserInventory*& GlobalNamespace::ProgressionManager_UserInventoryResponse::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr ::GlobalNamespace::ProgressionManager_UserInventory* const& GlobalNamespace::ProgressionManager_UserInventoryResponse::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr void GlobalNamespace::ProgressionManager_UserInventoryResponse::__cordl_internal_set_Result(::GlobalNamespace::ProgressionManager_UserInventory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
inline void GlobalNamespace::ProgressionManager_UserInventoryResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UserInventoryResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_UserInventoryResponse* GlobalNamespace::ProgressionManager_UserInventoryResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_UserInventoryResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_UserInventoryResponse::ProgressionManager_UserInventoryResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::*)()>(&::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::__cordl_internal_get_ResourceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourceType;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::__cordl_internal_get_ResourceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourceType;
}
constexpr void GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::__cordl_internal_set_ResourceType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResourceType = value;
}
inline void GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest* GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_IncrementSIResourceRequest::ProgressionManager_IncrementSIResourceRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_UnlockNodeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_UnlockNodeResponse::*)()>(&::GlobalNamespace::ProgressionManager_UnlockNodeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UnlockNodeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::UserHydratedProgressionTreeResponse*& GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_get_Tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tree;
}
constexpr ::GlobalNamespace::UserHydratedProgressionTreeResponse* const& GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_get_Tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tree;
}
constexpr void GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_set_Tree(::GlobalNamespace::UserHydratedProgressionTreeResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tree = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_UnlockNodeResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void GlobalNamespace::ProgressionManager_UnlockNodeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UnlockNodeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_UnlockNodeResponse* GlobalNamespace::ProgressionManager_UnlockNodeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_UnlockNodeResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_UnlockNodeResponse::ProgressionManager_UnlockNodeResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_UnlockNodeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_UnlockNodeRequest::*)()>(&::GlobalNamespace::ProgressionManager_UnlockNodeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UnlockNodeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_UnlockNodeRequest::__cordl_internal_get_TreeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreeId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_UnlockNodeRequest::__cordl_internal_get_TreeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreeId;
}
constexpr void GlobalNamespace::ProgressionManager_UnlockNodeRequest::__cordl_internal_set_TreeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TreeId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_UnlockNodeRequest::__cordl_internal_get_NodeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NodeId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_UnlockNodeRequest::__cordl_internal_get_NodeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NodeId;
}
constexpr void GlobalNamespace::ProgressionManager_UnlockNodeRequest::__cordl_internal_set_NodeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NodeId = value;
}
inline void GlobalNamespace::ProgressionManager_UnlockNodeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_UnlockNodeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_UnlockNodeRequest* GlobalNamespace::ProgressionManager_UnlockNodeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_UnlockNodeRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_UnlockNodeRequest::ProgressionManager_UnlockNodeRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetProgressionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetProgressionResponse::*)()>(&::GlobalNamespace::ProgressionManager_SetProgressionResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetProgressionResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_Track()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Track;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_Track() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Track;
}
constexpr void GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_set_Track(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Track = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_set_Progress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_SetProgressionResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void GlobalNamespace::ProgressionManager_SetProgressionResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetProgressionResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetProgressionResponse* GlobalNamespace::ProgressionManager_SetProgressionResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetProgressionResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetProgressionResponse::ProgressionManager_SetProgressionResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_SetProgressionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_SetProgressionRequest::*)()>(&::GlobalNamespace::ProgressionManager_SetProgressionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetProgressionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_SetProgressionRequest::__cordl_internal_get_TrackId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_SetProgressionRequest::__cordl_internal_get_TrackId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackId;
}
constexpr void GlobalNamespace::ProgressionManager_SetProgressionRequest::__cordl_internal_set_TrackId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackId = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_SetProgressionRequest::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_SetProgressionRequest::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void GlobalNamespace::ProgressionManager_SetProgressionRequest::__cordl_internal_set_Progress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
inline void GlobalNamespace::ProgressionManager_SetProgressionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_SetProgressionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_SetProgressionRequest* GlobalNamespace::ProgressionManager_SetProgressionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_SetProgressionRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_SetProgressionRequest::ProgressionManager_SetProgressionRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetProgressionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetProgressionResponse::*)()>(&::GlobalNamespace::ProgressionManager_GetProgressionResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetProgressionResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_Track()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Track;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_Track() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Track;
}
constexpr void GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_set_Track(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Track = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_set_Progress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr int32_t& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::ProgressionManager_GetProgressionResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void GlobalNamespace::ProgressionManager_GetProgressionResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetProgressionResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetProgressionResponse* GlobalNamespace::ProgressionManager_GetProgressionResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetProgressionResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetProgressionResponse::ProgressionManager_GetProgressionResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_GetProgressionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_GetProgressionRequest::*)()>(&::GlobalNamespace::ProgressionManager_GetProgressionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetProgressionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_GetProgressionRequest::__cordl_internal_get_TrackId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_GetProgressionRequest::__cordl_internal_get_TrackId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackId;
}
constexpr void GlobalNamespace::ProgressionManager_GetProgressionRequest::__cordl_internal_set_TrackId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackId = value;
}
inline void GlobalNamespace::ProgressionManager_GetProgressionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_GetProgressionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_GetProgressionRequest* GlobalNamespace::ProgressionManager_GetProgressionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_GetProgressionRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_GetProgressionRequest::ProgressionManager_GetProgressionRequest()   {
}
//  Writing Method size for method: ::GlobalNamespace::ProgressionManager_MothershipRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionManager_MothershipRequest::*)()>(&::GlobalNamespace::ProgressionManager_MothershipRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59741a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_MothershipRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr void GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_set_MothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipEnvId = value;
}
constexpr ::StringW& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipDeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr ::StringW const& GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_get_MothershipDeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr void GlobalNamespace::ProgressionManager_MothershipRequest::__cordl_internal_set_MothershipDeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipDeploymentId = value;
}
inline void GlobalNamespace::ProgressionManager_MothershipRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionManager_MothershipRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionManager_MothershipRequest* GlobalNamespace::ProgressionManager_MothershipRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionManager_MothershipRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionManager_MothershipRequest::ProgressionManager_MothershipRequest()   {
}
