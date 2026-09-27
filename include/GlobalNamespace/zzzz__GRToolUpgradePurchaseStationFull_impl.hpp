#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationFull.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_ShelfMovementState_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRSelectionWheel_def.hpp"
#include "GlobalNamespace/zzzz__GRSpringMovement_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_ShelfMovementState_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationShelf_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPhysicalButton_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.get_SelectedShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::get_SelectedShelf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"get_SelectedShelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.get_SelectedItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::get_SelectedItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"get_SelectedItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(bool)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c9d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58c9df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::GlobalNamespace::GRToolProgressionManager*, ::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::Init)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x58c9e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.OnShiftCreditChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::StringW, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::OnShiftCreditChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ca530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnShiftCreditChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.HideOrShowTextBasedOnLocalPlayerDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::HideOrShowTextBasedOnLocalPlayerDistance)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x58ca53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"HideOrShowTextBasedOnLocalPlayerDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::Tick)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x58ca9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SetActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SetActivePlayer)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x58ca2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetActivePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateActivePlayer)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x58cabf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateActivePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelf)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x58cb4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateSoundsForMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::GlobalNamespace::GRSpringMovement*)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateSoundsForMovement)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58cc7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateSoundsForMovement", {}, {::i2c::type_of<::GlobalNamespace::GRSpringMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SetCurrentShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SetCurrentShelf)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58cc8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetCurrentShelf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SetNextShelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SetNextShelf)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58cc6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetNextShelf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.ChangeShelfMovementState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::ChangeShelfMovementState)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58ca208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ChangeShelfMovementState", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateShelfVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, bool)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelfVisibility)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58cc9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelfVisibility", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateShelfDisplayElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelfDisplayElements)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58cbe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelfDisplayElements", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdatePurchaseButtonText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdatePurchaseButtonText)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x58cc3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdatePurchaseButtonText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateShelfItemDisplayElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelfItemDisplayElements)> {
  constexpr static std::size_t size = 0xaec;
  constexpr static std::size_t addrs = 0x58cca78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelfItemDisplayElements", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdatePlayerCurrencyUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdatePlayerCurrencyUI)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x58cbf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdatePlayerCurrencyUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.CanLocalPlayerPurchaseItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::CanLocalPlayerPurchaseItem)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58cd9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"CanLocalPlayerPurchaseItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.CheckActivePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::CheckActivePlayer)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x58cdad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"CheckActivePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SelectOption1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cdcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SelectOption2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cde18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SelectOption3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cde20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SelectOption4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cde28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.OnLocalSelectionButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::OnLocalSelectionButtonPressed)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58cdcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnLocalSelectionButtonPressed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SelectPageDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectPageDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ce184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectPageDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SelectPageUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectPageUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ce210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectPageUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.OnLocalSelectionPageChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::OnLocalSelectionPageChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58ce18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnLocalSelectionPageChange", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.CardSwiped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::CardSwiped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ce218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"CardSwiped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.PurchaseButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::PurchaseButtonPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58ce21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"PurchaseButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.DEBUGSetHackToolStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::DEBUGSetHackToolStation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ce44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"DEBUGSetHackToolStation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.RequestActivePlayerToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::RequestActivePlayerToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58cdc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"RequestActivePlayerToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateMagnet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateMagnet)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x58cba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateMagnet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.InitLinkedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::InitLinkedEntity)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x58c97b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"InitLinkedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.UpdateSelectionLever
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateSelectionLever)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x58cae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateSelectionLever", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.AttachEntityToMagnet_DockGoesToLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::AttachEntityToMagnet_DockGoesToLocation)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58ce450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"AttachEntityToMagnet_DockGoesToLocation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SetHandleAndSelectionWheelPositionRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SetHandleAndSelectionWheelPositionRemote)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58cea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetHandleAndSelectionWheelPositionRemote", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.ProgressionUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::ProgressionUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ceae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ProgressionUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.SetSelectedShelfAndItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, int32_t, bool)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::SetSelectedShelfAndItem)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x58cde30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetSelectedShelfAndItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.RequestPurchaseItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::RequestPurchaseItem)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58ce274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"RequestPurchaseItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.TryPurchaseAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,bool> (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::GlobalNamespace::GRPlayer*, int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::TryPurchaseAuthority)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x58ceaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"TryPurchaseAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.ToolPurchaseResponseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(::GlobalNamespace::GRPlayer*, int32_t, int32_t, bool)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::ToolPurchaseResponseLocal)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x58cecf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ToolPurchaseResponseLocal", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.InitPageSelectionWheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::InitPageSelectionWheel)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58ca0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"InitPageSelectionWheel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.ColorFromRGB32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::ColorFromRGB32)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58cf060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ColorFromRGB32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.IsValidShelfItemIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)(int32_t, int32_t)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::IsValidShelfItemIndex)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58cc5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"IsValidShelfItemIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.ExtractLossyScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::ExtractLossyScale)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x58ce724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ExtractLossyScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull.DecomposeTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::DecomposeTRS)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58ce874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"DecomposeTRS", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgradePurchaseStationFull._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgradePurchaseStationFull::*)()>(&::GlobalNamespace::GRToolUpgradePurchaseStationFull::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x58cf088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_grManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_grManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grManager = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_gameShelves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameShelves;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_gameShelves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameShelves;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_gameShelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationShelf>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameShelves = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_toolProgressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_toolProgressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolProgressionManager = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorPurchaseButtonCanAfford()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPurchaseButtonCanAfford;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorPurchaseButtonCanAfford() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPurchaseButtonCanAfford;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorPurchaseButtonCanAfford(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorPurchaseButtonCanAfford = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorCanBuyCredits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCanBuyCredits;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorCanBuyCredits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCanBuyCredits;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorCanBuyCredits(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorCanBuyCredits = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorCanBuyJuice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCanBuyJuice;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorCanBuyJuice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCanBuyJuice;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorCanBuyJuice(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorCanBuyJuice = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorCantBuy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCantBuy;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorCantBuy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorCantBuy;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorCantBuy(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorCantBuy = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorSelectedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSelectedItem;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorSelectedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSelectedItem;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorSelectedItem(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorSelectedItem = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorUnselectedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUnselectedItem;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorUnselectedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUnselectedItem;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorUnselectedItem(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorUnselectedItem = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorUnresearchedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUnresearchedItem;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorUnresearchedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUnresearchedItem;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorUnresearchedItem(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorUnresearchedItem = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorUnselectedUnresearchedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUnselectedUnresearchedItem;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_colorUnselectedUnresearchedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorUnselectedUnresearchedItem;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_colorUnselectedUnresearchedItem(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorUnselectedUnresearchedItem = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_selectedShelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedShelf;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_selectedShelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedShelf;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_selectedShelf(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedShelf = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_selectedItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedItem;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_selectedItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedItem;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_selectedItem(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedItem = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentActivePlayerActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentActivePlayerActorNumber;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentActivePlayerActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentActivePlayerActorNumber;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_currentActivePlayerActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentActivePlayerActorNumber = value;
}
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfMovementState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfMovementState;
}
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfMovementState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfMovementState;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_shelfMovementState(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfMovementState = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentVisibleShelfIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVisibleShelfIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentVisibleShelfIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVisibleShelfIndex;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_currentVisibleShelfIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVisibleShelfIndex = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_nextVisibleShelfIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextVisibleShelfIndex;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_nextVisibleShelfIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextVisibleShelfIndex;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_nextVisibleShelfIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextVisibleShelfIndex = value;
}
constexpr ::GlobalNamespace::GRSpringMovement*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_frontBackShelfMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontBackShelfMovement;
}
constexpr ::GlobalNamespace::GRSpringMovement* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_frontBackShelfMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontBackShelfMovement;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_frontBackShelfMovement(::GlobalNamespace::GRSpringMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontBackShelfMovement = value;
}
constexpr ::GlobalNamespace::GRSpringMovement*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_raiseLowerShelfMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseLowerShelfMovement;
}
constexpr ::GlobalNamespace::GRSpringMovement* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_raiseLowerShelfMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseLowerShelfMovement;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_raiseLowerShelfMovement(::GlobalNamespace::GRSpringMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raiseLowerShelfMovement = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfRootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfRootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfRootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfRootTransform;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_shelfRootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfRootTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfBackTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfBackTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfBackTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfBackTransform;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_shelfBackTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfBackTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfLowerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfLowerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfLowerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfLowerTransform;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_shelfLowerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfLowerTransform = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfSelectionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfSelectionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_shelfSelectionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfSelectionText;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_shelfSelectionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfSelectionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_playerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInfo;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_playerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInfo;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_playerInfo(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerInfo = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_itemDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemDescription;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_itemDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemDescription;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_itemDescription(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemDescription = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_itemDescriptionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemDescriptionName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_itemDescriptionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemDescriptionName;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_itemDescriptionName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemDescriptionName = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_itemDescriptionAnnotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemDescriptionAnnotation;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_itemDescriptionAnnotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemDescriptionAnnotation;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_itemDescriptionAnnotation(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemDescriptionAnnotation = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButtonText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButtonText;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_purchaseButtonText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseButtonText = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select1;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select1;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_select1(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___select1 = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select2;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select2;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_select2(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___select2 = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select3;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select3;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_select3(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___select3 = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select4;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPhysicalButton> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_select4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___select4;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_select4(::UnityW<::GlobalNamespace::GorillaPhysicalButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___select4 = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_audioSourceLooping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceLooping;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_audioSourceLooping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceLooping;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_audioSourceLooping(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceLooping = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_audioSourceClang()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceClang;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_audioSourceClang() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceClang;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_audioSourceClang(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceClang = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_audioSourceLoopingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceLoopingVolume;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_audioSourceLoopingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceLoopingVolume;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_audioSourceLoopingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceLoopingVolume = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_unresearchedItemMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unresearchedItemMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_unresearchedItemMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unresearchedItemMaterial;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_unresearchedItemMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unresearchedItemMaterial = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_interactAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_interactAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactAudioSource;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_interactAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactAudioSource = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_scanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_scanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanner;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_scanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanner = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseSucceded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSucceded;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseSucceded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSucceded;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_purchaseSucceded(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseSucceded = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseFailed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseFailed;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_purchaseFailed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseFailed = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_backlightPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightPurchase;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_backlightPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightPurchase;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_backlightPurchase(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backlightPurchase = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_backlightResearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightResearch;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_backlightResearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightResearch;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_backlightResearch(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backlightResearch = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_backlightLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightLocked;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_backlightLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backlightLocked;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_backlightLocked(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backlightLocked = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastKnownLocalPlayerCredits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKnownLocalPlayerCredits;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastKnownLocalPlayerCredits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKnownLocalPlayerCredits;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_lastKnownLocalPlayerCredits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastKnownLocalPlayerCredits = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastKnownLocalPlayerJuice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKnownLocalPlayerJuice;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastKnownLocalPlayerJuice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastKnownLocalPlayerJuice;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_lastKnownLocalPlayerJuice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastKnownLocalPlayerJuice = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_needsUIRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsUIRefresh;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_needsUIRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsUIRefresh;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_needsUIRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsUIRefresh = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_ropeTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeTop;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_ropeTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeTop;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_ropeTop(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeTop = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_ropeEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_ropeEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropeEnd;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_ropeEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropeEnd = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_magnet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnet;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_magnet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnet;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_magnet(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnet = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentMagnetEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMagnetEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentMagnetEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMagnetEntity;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_currentMagnetEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMagnetEntity = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentMagnetEntityTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMagnetEntityTypeId;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentMagnetEntityTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMagnetEntityTypeId;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_currentMagnetEntityTypeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMagnetEntityTypeId = value;
}
constexpr int32_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_desiredMagnetEntityTypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredMagnetEntityTypeId;
}
constexpr int32_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_desiredMagnetEntityTypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredMagnetEntityTypeId;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_desiredMagnetEntityTypeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredMagnetEntityTypeId = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_prefabMagnetHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabMagnetHeightOffset;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_prefabMagnetHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabMagnetHeightOffset;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_prefabMagnetHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabMagnetHeightOffset = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_maxMagnetDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMagnetDistance;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_maxMagnetDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMagnetDistance;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_maxMagnetDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMagnetDistance = value;
}
constexpr ::GlobalNamespace::GRSpringMovement*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_magnetMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetMovement;
}
constexpr ::GlobalNamespace::GRSpringMovement* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_magnetMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetMovement;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_magnetMovement(::GlobalNamespace::GRSpringMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetMovement = value;
}
constexpr ::UnityW<::GlobalNamespace::GRSelectionWheel>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_pageSelectionWheel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSelectionWheel;
}
constexpr ::UnityW<::GlobalNamespace::GRSelectionWheel> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_pageSelectionWheel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSelectionWheel;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_pageSelectionWheel(::UnityW<::GlobalNamespace::GRSelectionWheel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageSelectionWheel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_pageSelectionHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSelectionHandle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_pageSelectionHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSelectionHandle;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_pageSelectionHandle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageSelectionHandle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_pageSelectionLever()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSelectionLever;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_pageSelectionLever() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageSelectionLever;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_pageSelectionLever(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageSelectionLever = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_playerQueueTimeLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerQueueTimeLimit;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_playerQueueTimeLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerQueueTimeLimit;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_playerQueueTimeLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerQueueTimeLimit = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_disablePurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disablePurchaseButton;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_disablePurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disablePurchaseButton;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_disablePurchaseButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disablePurchaseButton = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseButtonCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButtonCooldown;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseButtonCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButtonCooldown;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_purchaseButtonCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseButtonCooldown = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseButtonPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButtonPressed;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_purchaseButtonPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButtonPressed;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_purchaseButtonPressed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseButtonPressed = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentlyShowingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyShowingText;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_currentlyShowingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyShowingText;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_currentlyShowingText(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlyShowingText = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_cachedRequiredPartsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRequiredPartsList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>* const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_cachedRequiredPartsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRequiredPartsList;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_cachedRequiredPartsList(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedRequiredPartsList = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastRequestedActivePlayerTokenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedActivePlayerTokenTime;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastRequestedActivePlayerTokenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedActivePlayerTokenTime;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_lastRequestedActivePlayerTokenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRequestedActivePlayerTokenTime = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_requestActivePlayerTokenThrottleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestActivePlayerTokenThrottleTime;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_requestActivePlayerTokenThrottleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestActivePlayerTokenThrottleTime;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_requestActivePlayerTokenThrottleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestActivePlayerTokenThrottleTime = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bIsGrippingLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsGrippingLeft;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bIsGrippingLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsGrippingLeft;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_bIsGrippingLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bIsGrippingLeft = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bIsGrippingRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsGrippingRight;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bIsGrippingRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bIsGrippingRight;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_bIsGrippingRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bIsGrippingRight = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bGripLeftLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bGripLeftLastFrame;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bGripLeftLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bGripLeftLastFrame;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_bGripLeftLastFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bGripLeftLastFrame = value;
}
constexpr bool& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bGripRightLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bGripRightLastFrame;
}
constexpr bool const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_bGripRightLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bGripRightLastFrame;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_bGripRightLastFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bGripRightLastFrame = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_maxHandleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandleRange;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_maxHandleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandleRange;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_maxHandleRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHandleRange = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_timeSinceLastHandleBroadcast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLastHandleBroadcast;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_timeSinceLastHandleBroadcast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLastHandleBroadcast;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_timeSinceLastHandleBroadcast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceLastHandleBroadcast = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_angleOfLastHandleBroadcast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleOfLastHandleBroadcast;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_angleOfLastHandleBroadcast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleOfLastHandleBroadcast;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_angleOfLastHandleBroadcast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleOfLastHandleBroadcast = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_selectionWheelAngleOfLastBroadcast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionWheelAngleOfLastBroadcast;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_selectionWheelAngleOfLastBroadcast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectionWheelAngleOfLastBroadcast;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_selectionWheelAngleOfLastBroadcast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectionWheelAngleOfLastBroadcast = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_quantMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quantMult;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_quantMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quantMult;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_quantMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quantMult = value;
}
constexpr float_t& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastHandleAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHandleAngle;
}
constexpr float_t const& GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_get_lastHandleAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHandleAngle;
}
constexpr void GlobalNamespace::GRToolUpgradePurchaseStationFull::__cordl_internal_set_lastHandleAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHandleAngle = value;
}
inline int32_t GlobalNamespace::GRToolUpgradePurchaseStationFull::get_SelectedShelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"get_SelectedShelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRToolUpgradePurchaseStationFull::get_SelectedItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"get_SelectedItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolUpgradePurchaseStationFull::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::Init(::GlobalNamespace::GRToolProgressionManager*  progression, ::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progression, reactor);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::OnShiftCreditChanged(::StringW  targetMothershipId, int32_t  newShiftCredits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnShiftCreditChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetMothershipId, newShiftCredits);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::HideOrShowTextBasedOnLocalPlayerDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"HideOrShowTextBasedOnLocalPlayerDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SetActivePlayer(int32_t  actorNum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetActivePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNum);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateActivePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateActivePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateSoundsForMovement(::GlobalNamespace::GRSpringMovement*  movement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateSoundsForMovement", {}, {::i2c::type_of<::GlobalNamespace::GRSpringMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, movement);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SetCurrentShelf(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetCurrentShelf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SetNextShelf(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetNextShelf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::ChangeShelfMovementState(::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ChangeShelfMovementState", {}, {::i2c::type_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelfVisibility(int32_t  shelfID, bool  isVisible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelfVisibility", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfID, isVisible);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelfDisplayElements(int32_t  shelfID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelfDisplayElements", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelfID);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdatePurchaseButtonText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdatePurchaseButtonText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateShelfItemDisplayElements(int32_t  shelf, int32_t  slotID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateShelfItemDisplayElements", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelf, slotID);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdatePlayerCurrencyUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdatePlayerCurrencyUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRToolUpgradePurchaseStationFull::CanLocalPlayerPurchaseItem(int32_t  shelf, int32_t  slotID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"CanLocalPlayerPurchaseItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shelf, slotID);
}
inline bool GlobalNamespace::GRToolUpgradePurchaseStationFull::CheckActivePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"CheckActivePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectOption4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectOption4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::OnLocalSelectionButtonPressed(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnLocalSelectionButtonPressed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectPageDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectPageDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SelectPageUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SelectPageUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::OnLocalSelectionPageChange(int32_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"OnLocalSelectionPageChange", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::CardSwiped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"CardSwiped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::PurchaseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"PurchaseButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::DEBUGSetHackToolStation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"DEBUGSetHackToolStation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::RequestActivePlayerToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"RequestActivePlayerToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateMagnet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateMagnet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::InitLinkedEntity(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"InitLinkedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::UpdateSelectionLever()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"UpdateSelectionLever", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::AttachEntityToMagnet_DockGoesToLocation(::UnityEngine::Transform*  magnet, ::UnityEngine::Transform*  entity, ::UnityEngine::Transform*  dock, ::UnityEngine::Vector3  magnetDockOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"AttachEntityToMagnet_DockGoesToLocation", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, magnet, entity, dock, magnetDockOffset);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SetHandleAndSelectionWheelPositionRemote(int32_t  handlePos, int32_t  wheelPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetHandleAndSelectionWheelPositionRemote", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handlePos, wheelPos);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::ProgressionUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ProgressionUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::SetSelectedShelfAndItem(int32_t  shelf, int32_t  item, bool  fromNetworkRPC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"SetSelectedShelfAndItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelf, item, fromNetworkRPC);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::RequestPurchaseItem(int32_t  shelf, int32_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"RequestPurchaseItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shelf, item);
}
inline ::System::ValueTuple_2<bool,bool> GlobalNamespace::GRToolUpgradePurchaseStationFull::TryPurchaseAuthority(::GlobalNamespace::GRPlayer*  player, int32_t  shelf, int32_t  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"TryPurchaseAuthority", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,bool>>(this, ___internal_method, player, shelf, item);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::ToolPurchaseResponseLocal(::GlobalNamespace::GRPlayer*  player, int32_t  shelf, int32_t  item, bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ToolPurchaseResponseLocal", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, shelf, item, success);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::InitPageSelectionWheel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"InitPageSelectionWheel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::GRToolUpgradePurchaseStationFull::ColorFromRGB32(int32_t  r, int32_t  g, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ColorFromRGB32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, r, g, b);
}
inline bool GlobalNamespace::GRToolUpgradePurchaseStationFull::IsValidShelfItemIndex(int32_t  shelf, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"IsValidShelfItemIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shelf, idx);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRToolUpgradePurchaseStationFull::ExtractLossyScale(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"ExtractLossyScale", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, m);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::DecomposeTRS(::UnityEngine::Matrix4x4  m, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot, ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {"DecomposeTRS", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, pos, rot, scale);
}
inline void GlobalNamespace::GRToolUpgradePurchaseStationFull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgradePurchaseStationFull* GlobalNamespace::GRToolUpgradePurchaseStationFull::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgradePurchaseStationFull*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GRToolUpgradePurchaseStationFull::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GRToolUpgradePurchaseStationFull::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull::GRToolUpgradePurchaseStationFull()   {
}
