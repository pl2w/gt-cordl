#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorShiftManager.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_State_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyCount_def.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_def.hpp"
#include "GlobalNamespace/zzzz__GRShiftStat_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftDepthDisplay_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_State_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_ShiftTotalEarned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_ShiftTotalEarned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftTotalEarned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_ShiftActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_ShiftActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_ShiftStartNetworkTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_ShiftStartNetworkTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftStartNetworkTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_LocalPlayerInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_LocalPlayerInside)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_LocalPlayerInside", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_TotalPlayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_TotalPlayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_TotalPlayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_ShiftId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_ShiftId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.SetShiftId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::StringW)>(&::GlobalNamespace::GhostReactorShiftManager::SetShiftId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5861e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"SetShiftId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.get_ShiftState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostReactorShiftManager_State (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::get_ShiftState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.set_ShiftState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::GlobalNamespace::GhostReactorShiftManager_State)>(&::GlobalNamespace::GhostReactorShiftManager::set_ShiftState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5861e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"set_ShiftState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorShiftManager_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::GlobalNamespace::GhostReactorManager*)>(&::GlobalNamespace::GhostReactorShiftManager::Init)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5861e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RefreshShiftStatsDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RefreshShiftStatsDisplay)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5855cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftStatsDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.StartShiftButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::StartShiftButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5861ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"StartShiftButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RequestShiftStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RequestShiftStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5861ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RequestShiftStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.EndShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::EndShift)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5861ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"EndShift", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.ClearEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::ClearEntities)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5861ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"ClearEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RefreshShiftTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RefreshShiftTimer)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5861f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.UpdateLogoAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*)>(&::GlobalNamespace::GhostReactorShiftManager::UpdateLogoAnimations)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x586205c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateLogoAnimations", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.UpdateReactorDisplayMainShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(float_t)>(&::GlobalNamespace::GhostReactorShiftManager::UpdateReactorDisplayMainShared)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x586221c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateReactorDisplayMainShared", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnShiftStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::StringW, double_t, bool, bool)>(&::GlobalNamespace::GhostReactorShiftManager::OnShiftStarted)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5855f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnShiftStarted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnShiftEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(double_t, bool, ::GlobalNamespace::ZoneClearReason)>(&::GlobalNamespace::GhostReactorShiftManager::OnShiftEnded)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5856a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnShiftEnded", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::Tick)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5862dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(float_t)>(&::GlobalNamespace::GhostReactorShiftManager::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5862ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"AuthorityUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(float_t)>(&::GlobalNamespace::GhostReactorShiftManager::SharedUpdate)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x58630e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"SharedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.TeleportLocalPlayerIfOutOfBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::TeleportLocalPlayerIfOutOfBounds)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5862b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"TeleportLocalPlayerIfOutOfBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RevealJudgment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(int32_t)>(&::GlobalNamespace::GhostReactorShiftManager::RevealJudgment)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58571f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RevealJudgment", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.ResetJudgment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::ResetJudgment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5855c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"ResetJudgment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.ResetJoinTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::ResetJoinTimes)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5862aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"ResetJoinTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.CalculatePlayerPercentages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::CalculatePlayerPercentages)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5863fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"CalculatePlayerPercentages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.CalculateShiftTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::CalculateShiftTotal)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5856e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"CalculateShiftTotal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GhostReactorShiftManager::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58641ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GhostReactorShiftManager::OnTriggerExit)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x58642d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnButtonDelveDeeper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::OnButtonDelveDeeper)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5864434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDelveDeeper", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnButtonDEBUGResetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::OnButtonDEBUGResetDepth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5864438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDEBUGResetDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnButtonDEBUGDelveDeeper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::OnButtonDEBUGDelveDeeper)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5864450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDEBUGDelveDeeper", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.OnButtonDEBUGDelveShallower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::OnButtonDEBUGDelveShallower)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5864468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDEBUGDelveShallower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::GlobalNamespace::GhostReactorShiftManager_State)>(&::GlobalNamespace::GhostReactorShiftManager::RequestState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5855824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorShiftManager_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)(::GlobalNamespace::GhostReactorShiftManager_State, bool)>(&::GlobalNamespace::GhostReactorShiftManager::SetState)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5859cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorShiftManager_State>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostReactorShiftManager_State (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585f848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.IsSoaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::IsSoaking)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5861870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"IsSoaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.GetPreShiftDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::GetPreShiftDuration)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58645fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPreShiftDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.GetPreShiftDurationFirstArrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::GetPreShiftDurationFirstArrive)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5864620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPreShiftDurationFirstArrive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.GetPostShiftDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::GetPostShiftDuration)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5864644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPostShiftDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.GetPreparingToDrillDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::GetPreparingToDrillDuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5864668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPreparingToDrillDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.GetDrillingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::GetDrillingDuration)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5861b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetDrillingDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.UpdateStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::UpdateStateAuthority)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5863910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateStateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.UpdateStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::UpdateStateShared)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5863b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateStateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RefreshDepthDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RefreshDepthDisplay)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5864480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshDepthDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RefreshShiftLeaderboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RefreshShiftLeaderboard)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5863f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftLeaderboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RefreshShiftLeaderboard_Safety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RefreshShiftLeaderboard_Safety)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x586467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftLeaderboard_Safety", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager.RefreshShiftLeaderboard_Efficiency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::RefreshShiftLeaderboard_Efficiency)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5864c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftLeaderboard_Efficiency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager::*)()>(&::GlobalNamespace::GhostReactorShiftManager::_ctor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5865154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_frontGate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontGate;
}
constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_frontGate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontGate;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_frontGate(::UnityW<::GlobalNamespace::GRMetalEnergyGate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontGate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_startShiftButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startShiftButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_startShiftButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startShiftButton;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_startShiftButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startShiftButton = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftTimerText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftTimerText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftTimerText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftTimerText;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftTimerText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftTimerText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStatsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStatsText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStatsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStatsText;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftStatsText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftStatsText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftJugmentText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftJugmentText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftJugmentText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftJugmentText;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftJugmentText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftJugmentText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_reactorTextMain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorTextMain;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_reactorTextMain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactorTextMain;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_reactorTextMain(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactorTextMain = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_wrongStumpGoo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongStumpGoo;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_wrongStumpGoo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrongStumpGoo;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_wrongStumpGoo(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrongStumpGoo = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftDurationMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftDurationMinutes;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftDurationMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftDurationMinutes;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftDurationMinutes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftDurationMinutes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_playerTeleportTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTeleportTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_playerTeleportTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTeleportTransform;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_playerTeleportTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTeleportTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_gatePlaneTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gatePlaneTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_gatePlaneTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gatePlaneTransform;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_gatePlaneTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gatePlaneTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_gateBlockerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gateBlockerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_gateBlockerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gateBlockerTransform;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_gateBlockerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gateBlockerTransform = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyLoop1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyLoop1;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyLoop1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyLoop1;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_anomalyLoop1(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anomalyLoop1 = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyLoop2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyLoop2;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyLoop2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyLoop2;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_anomalyLoop2(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anomalyLoop2 = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyLoop3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyLoop3;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyLoop3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyLoop3;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_anomalyLoop3(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anomalyLoop3 = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyAlert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyAlert;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyAlert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyAlert;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_anomalyAlert(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anomalyAlert = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyAlertCountdownTimeToStartPlayingInMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyAlertCountdownTimeToStartPlayingInMinutes;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_anomalyAlertCountdownTimeToStartPlayingInMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anomalyAlertCountdownTimeToStartPlayingInMinutes;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_anomalyAlertCountdownTimeToStartPlayingInMinutes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anomalyAlertCountdownTimeToStartPlayingInMinutes = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_roomCloseTimeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCloseTimeSeconds;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_roomCloseTimeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCloseTimeSeconds;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_roomCloseTimeSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomCloseTimeSeconds = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_isRoomClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRoomClosed;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_isRoomClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRoomClosed;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_isRoomClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRoomClosed = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_preShiftDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preShiftDuration;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_preShiftDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preShiftDuration;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_preShiftDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preShiftDuration = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_preShiftDurationFirstArrive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preShiftDurationFirstArrive;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_preShiftDurationFirstArrive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preShiftDurationFirstArrive;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_preShiftDurationFirstArrive(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preShiftDurationFirstArrive = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_postShiftDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postShiftDuration;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_postShiftDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postShiftDuration;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_postShiftDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postShiftDuration = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_drillDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drillDuration;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_drillDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drillDuration;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_drillDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drillDuration = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_bIsStartingFloorAuthorityOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsStartingFloorAuthorityOnly;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_bIsStartingFloorAuthorityOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsStartingFloorAuthorityOnly;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_bIsStartingFloorAuthorityOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bIsStartingFloorAuthorityOnly = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceAudioSource;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceBellAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceBellAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceBellAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceBellAudioSource;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceBellAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceBellAudioSource = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announcePrepareShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announcePrepareShift;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announcePrepareShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announcePrepareShift;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announcePrepareShift(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announcePrepareShift = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceStartShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceStartShift;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceStartShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceStartShift;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceStartShift(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceStartShift = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceCompleteShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceCompleteShift;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceCompleteShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceCompleteShift;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceCompleteShift(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceCompleteShift = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceFailShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceFailShift;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceFailShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceFailShift;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceFailShift(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceFailShift = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announcePrepareDrill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announcePrepareDrill;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announcePrepareDrill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announcePrepareDrill;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announcePrepareDrill(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announcePrepareDrill = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceTip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceTip;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceTip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceTip;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceTip(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceTip = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceBell()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceBell;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_announceBell() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___announceBell;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_announceBell(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___announceBell = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_warnings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warnings;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_warnings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warnings;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_warnings(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warnings = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_warningAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_warningAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningAudio;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_warningAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningAudio = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_warningClipPlayTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningClipPlayTimes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_warningClipPlayTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningClipPlayTimes;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_warningClipPlayTimes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningClipPlayTimes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringTransform;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_ringTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringTransform = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringClosingDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringClosingDuration;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringClosingDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringClosingDuration;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_ringClosingDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringClosingDuration = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringClosingMaxRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringClosingMaxRadius;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringClosingMaxRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringClosingMaxRadius;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_ringClosingMaxRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringClosingMaxRadius = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringClosingMinRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringClosingMinRadius;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_ringClosingMinRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringClosingMinRadius;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_ringClosingMinRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringClosingMinRadius = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_debugFastForwardRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFastForwardRate;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_debugFastForwardRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFastForwardRate;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_debugFastForwardRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugFastForwardRate = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_debugFastForwarding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFastForwarding;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_debugFastForwarding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFastForwarding;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_debugFastForwarding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugFastForwarding = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStarted;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStarted;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftStarted = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftJustStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftJustStarted;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftJustStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftJustStarted;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftJustStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftJustStarted = value;
}
constexpr double_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStartNetworkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStartNetworkTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStartNetworkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStartNetworkTime;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftStartNetworkTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftStartNetworkTime = value;
}
constexpr double_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftEndNetworkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftEndNetworkTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftEndNetworkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftEndNetworkTime;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftEndNetworkTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftEndNetworkTime = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_prevCountDownTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevCountDownTotal;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_prevCountDownTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevCountDownTotal;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_prevCountDownTotal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevCountDownTotal = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftTotalEarned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftTotalEarned;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftTotalEarned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftTotalEarned;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftTotalEarned(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftTotalEarned = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftSanityMaximumEarned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftSanityMaximumEarned;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftSanityMaximumEarned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftSanityMaximumEarned;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftSanityMaximumEarned(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftSanityMaximumEarned = value;
}
constexpr ::GlobalNamespace::GhostReactorShiftDepthDisplay*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_depthDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthDisplay;
}
constexpr ::GlobalNamespace::GhostReactorShiftDepthDisplay* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_depthDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthDisplay;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_depthDisplay(::GlobalNamespace::GhostReactorShiftDepthDisplay*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthDisplay = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_authorizedToDelveDeeper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorizedToDelveDeeper;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_authorizedToDelveDeeper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorizedToDelveDeeper;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_authorizedToDelveDeeper(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authorizedToDelveDeeper = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftRewardCoresForMothership()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftRewardCoresForMothership;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftRewardCoresForMothership() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftRewardCoresForMothership;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftRewardCoresForMothership(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftRewardCoresForMothership = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_coresRequiredToDelveDeeper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresRequiredToDelveDeeper;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_coresRequiredToDelveDeeper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresRequiredToDelveDeeper;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_coresRequiredToDelveDeeper(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresRequiredToDelveDeeper = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_sentientCoresRequiredToDelveDeeper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoresRequiredToDelveDeeper;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_sentientCoresRequiredToDelveDeeper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoresRequiredToDelveDeeper;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_sentientCoresRequiredToDelveDeeper(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sentientCoresRequiredToDelveDeeper = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_killsRequiredToDelveDeeper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___killsRequiredToDelveDeeper;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_killsRequiredToDelveDeeper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___killsRequiredToDelveDeeper;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_killsRequiredToDelveDeeper(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___killsRequiredToDelveDeeper = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_maxPlayerDeaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayerDeaths;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_maxPlayerDeaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayerDeaths;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_maxPlayerDeaths(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPlayerDeaths = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftRewardCredits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftRewardCredits;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftRewardCredits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftRewardCredits;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftRewardCredits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftRewardCredits = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_localPlayerInside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInside;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_localPlayerInside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInside;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_localPlayerInside(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerInside = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_localPlayerOverlapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerOverlapping;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_localPlayerOverlapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerOverlapping;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_localPlayerOverlapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerOverlapping = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_totalPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPlayTime;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_totalPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalPlayTime;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_totalPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalPlayTime = value;
}
constexpr ::StringW& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_gameIdGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameIdGuid;
}
constexpr ::StringW const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_gameIdGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameIdGuid;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_gameIdGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameIdGuid = value;
}
constexpr ::GlobalNamespace::GRShiftStat*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStats;
}
constexpr ::GlobalNamespace::GRShiftStat* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftStats;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftStats(::GlobalNamespace::GRShiftStat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftStats = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_grManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_grManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grManager = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftLeaderboardEfficiency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftLeaderboardEfficiency;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftLeaderboardEfficiency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftLeaderboardEfficiency;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftLeaderboardEfficiency(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftLeaderboardEfficiency = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftLeaderboardSafety()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftLeaderboardSafety;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_shiftLeaderboardSafety() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftLeaderboardSafety;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_shiftLeaderboardSafety(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftLeaderboardSafety = value;
}
constexpr double_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastLeaderboardRefreshTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeaderboardRefreshTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastLeaderboardRefreshTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeaderboardRefreshTime;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_lastLeaderboardRefreshTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeaderboardRefreshTime = value;
}
constexpr float_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_leaderboardUpdateFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaderboardUpdateFrequency;
}
constexpr float_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_leaderboardUpdateFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaderboardUpdateFrequency;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_leaderboardUpdateFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaderboardUpdateFrequency = value;
}
constexpr ::GlobalNamespace::GhostReactorShiftManager_State& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get__ShiftState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShiftState_k__BackingField;
}
constexpr ::GlobalNamespace::GhostReactorShiftManager_State const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get__ShiftState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShiftState_k__BackingField;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set__ShiftState_k__BackingField(::GlobalNamespace::GhostReactorShiftManager_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShiftState_k__BackingField = value;
}
constexpr double_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr double_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastReactorLogoAnimationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReactorLogoAnimationTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastReactorLogoAnimationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReactorLogoAnimationTime;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_lastReactorLogoAnimationTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReactorLogoAnimationTime = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastReactorLogoAnimFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReactorLogoAnimFrame;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastReactorLogoAnimFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReactorLogoAnimFrame;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_lastReactorLogoAnimFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReactorLogoAnimFrame = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_isPlayingLogoAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayingLogoAnimation;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_isPlayingLogoAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayingLogoAnimation;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_isPlayingLogoAnimation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlayingLogoAnimation = value;
}
constexpr double_t& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastReactorDisplayUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReactorDisplayUpdate;
}
constexpr double_t const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_lastReactorDisplayUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReactorDisplayUpdate;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_lastReactorDisplayUpdate(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReactorDisplayUpdate = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_cachedStringBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedStringBuilder;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_cachedStringBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedStringBuilder;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_cachedStringBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedStringBuilder = value;
}
constexpr bool& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_nextRefreshLeaderboardSafety()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRefreshLeaderboardSafety;
}
constexpr bool const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_nextRefreshLeaderboardSafety() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRefreshLeaderboardSafety;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_nextRefreshLeaderboardSafety(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextRefreshLeaderboardSafety = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_leaderboardDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaderboardDisplay;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GhostReactorShiftManager::__cordl_internal_get_leaderboardDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaderboardDisplay;
}
constexpr void GlobalNamespace::GhostReactorShiftManager::__cordl_internal_set_leaderboardDisplay(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaderboardDisplay = value;
}
inline int32_t GlobalNamespace::GhostReactorShiftManager::get_ShiftTotalEarned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftTotalEarned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorShiftManager::get_ShiftActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t GlobalNamespace::GhostReactorShiftManager::get_ShiftStartNetworkTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftStartNetworkTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorShiftManager::get_LocalPlayerInside()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_LocalPlayerInside", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GhostReactorShiftManager::get_TotalPlayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_TotalPlayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GhostReactorShiftManager::get_ShiftId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::SetShiftId(::StringW  shiftId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"SetShiftId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftId);
}
inline ::GlobalNamespace::GhostReactorShiftManager_State GlobalNamespace::GhostReactorShiftManager::get_ShiftState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"get_ShiftState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostReactorShiftManager_State>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::set_ShiftState(::GlobalNamespace::GhostReactorShiftManager_State  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"set_ShiftState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorShiftManager_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GhostReactorShiftManager::Init(::GlobalNamespace::GhostReactorManager*  grManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grManager);
}
inline void GlobalNamespace::GhostReactorShiftManager::RefreshShiftStatsDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftStatsDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::StartShiftButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"StartShiftButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RequestShiftStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RequestShiftStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::EndShift()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"EndShift", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::ClearEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"ClearEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RefreshShiftTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::UpdateLogoAnimations(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  frames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateLogoAnimations", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frames);
}
inline void GlobalNamespace::GhostReactorShiftManager::UpdateReactorDisplayMainShared(float_t  countDownTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateReactorDisplayMainShared", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countDownTotal);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnShiftStarted(::StringW  gameId, double_t  shiftStartTime, bool  wasPlayerInAtStart, bool  isFirstShift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnShiftStarted", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameId, shiftStartTime, wasPlayerInAtStart, isFirstShift);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnShiftEnded(double_t  shiftEndTime, bool  isShiftActuallyEnding, ::GlobalNamespace::ZoneClearReason  zoneClearReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnShiftEnded", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftEndTime, isShiftActuallyEnding, zoneClearReason);
}
inline void GlobalNamespace::GhostReactorShiftManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::AuthorityUpdate(float_t  countDownTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"AuthorityUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countDownTotal);
}
inline void GlobalNamespace::GhostReactorShiftManager::SharedUpdate(float_t  countDownTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"SharedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countDownTotal);
}
inline void GlobalNamespace::GhostReactorShiftManager::TeleportLocalPlayerIfOutOfBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"TeleportLocalPlayerIfOutOfBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RevealJudgment(int32_t  evaluation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RevealJudgment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evaluation);
}
inline void GlobalNamespace::GhostReactorShiftManager::ResetJudgment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"ResetJudgment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::ResetJoinTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"ResetJoinTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::CalculatePlayerPercentages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"CalculatePlayerPercentages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::CalculateShiftTotal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"CalculateShiftTotal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnButtonDelveDeeper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDelveDeeper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnButtonDEBUGResetDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDEBUGResetDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnButtonDEBUGDelveDeeper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDEBUGDelveDeeper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::OnButtonDEBUGDelveShallower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"OnButtonDEBUGDelveShallower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RequestState(::GlobalNamespace::GhostReactorShiftManager_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorShiftManager_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GhostReactorShiftManager::SetState(::GlobalNamespace::GhostReactorShiftManager_State  newState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorShiftManager_State>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, force);
}
inline ::GlobalNamespace::GhostReactorShiftManager_State GlobalNamespace::GhostReactorShiftManager::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostReactorShiftManager_State>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorShiftManager::IsSoaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"IsSoaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactorShiftManager::GetPreShiftDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPreShiftDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactorShiftManager::GetPreShiftDurationFirstArrive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPreShiftDurationFirstArrive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactorShiftManager::GetPostShiftDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPostShiftDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactorShiftManager::GetPreparingToDrillDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetPreparingToDrillDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactorShiftManager::GetDrillingDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"GetDrillingDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::UpdateStateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateStateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::UpdateStateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"UpdateStateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RefreshDepthDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshDepthDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RefreshShiftLeaderboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftLeaderboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RefreshShiftLeaderboard_Safety()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftLeaderboard_Safety", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::RefreshShiftLeaderboard_Efficiency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {"RefreshShiftLeaderboard_Efficiency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorShiftManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorShiftManager* GlobalNamespace::GhostReactorShiftManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorShiftManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorShiftManager::GhostReactorShiftManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactorShiftManager_WarningPres._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorShiftManager_WarningPres::*)()>(&::GlobalNamespace::GhostReactorShiftManager_WarningPres::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58653fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostReactorShiftManager_WarningPres::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr int32_t const& GlobalNamespace::GhostReactorShiftManager_WarningPres::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GlobalNamespace::GhostReactorShiftManager_WarningPres::__cordl_internal_set_time(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GhostReactorShiftManager_WarningPres::__cordl_internal_get_sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GhostReactorShiftManager_WarningPres::__cordl_internal_get_sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sound;
}
constexpr void GlobalNamespace::GhostReactorShiftManager_WarningPres::__cordl_internal_set_sound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sound = value;
}
inline void GlobalNamespace::GhostReactorShiftManager_WarningPres::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorShiftManager_WarningPres* GlobalNamespace::GhostReactorShiftManager_WarningPres::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorShiftManager_WarningPres*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorShiftManager_WarningPres::GhostReactorShiftManager_WarningPres()   {
}
