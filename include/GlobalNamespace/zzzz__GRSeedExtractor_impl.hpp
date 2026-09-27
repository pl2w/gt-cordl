#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_PlayerData_impl.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_ScreenDisplayData_impl.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_def.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_ScreenDisplayData_def.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_SeedProcessingVisualState_def.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__TriggerEventNotifier_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.get_StationOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::get_StationOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"get_StationOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.get_StationOpenForLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::get_StationOpenForLocalPlayer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58aa678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"get_StationOpenForLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.get_CurrentPlayerActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::get_CurrentPlayerActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aa710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"get_CurrentPlayerActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::Awake)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x58aa718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(::GlobalNamespace::GRToolProgressionManager*, ::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRSeedExtractor::Init)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x58aabbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58aadf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::OnDisable)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x58aadf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::Update)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x58ab068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.ValidateCurrentPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::ValidateCurrentPlayer)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x58ab6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ValidateCurrentPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.TriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::GRSeedExtractor::TriggerEntered)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58ac40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.TriggerExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::GRSeedExtractor::TriggerExited)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x58ac590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TriggerExited", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnPlayerCardSwipe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t)>(&::GlobalNamespace::GRSeedExtractor::OnPlayerCardSwipe)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58ac790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnPlayerCardSwipe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.DepositorTriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::GRSeedExtractor::DepositorTriggerEntered)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x58ac900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"DepositorTriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OverdrivePurchaseButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::OverdrivePurchaseButtonPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58acdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OverdrivePurchaseButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.LocalPlayerCanPurchaseOverdrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::LocalPlayerCanPurchaseOverdrive)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58acdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"LocalPlayerCanPurchaseOverdrive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OverdrivePurchaseConfirmButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::OverdrivePurchaseConfirmButtonPressed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58aceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OverdrivePurchaseConfirmButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnPlayerStatusReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(::GlobalNamespace::ProgressionManager_JuicerStatusResponse*)>(&::GlobalNamespace::GRSeedExtractor::OnPlayerStatusReceived)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x58acf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnPlayerStatusReceived", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.TryDepositSeedServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(bool)>(&::GlobalNamespace::GRSeedExtractor::TryDepositSeedServerResponse)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x58ad430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TryDepositSeedServerResponse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.CardSwipeSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::CardSwipeSuccess)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58ad760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CardSwipeSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.CardSwipeFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::CardSwipeFail)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58ad784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CardSwipeFail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.TryDepositSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t, int32_t)>(&::GlobalNamespace::GRSeedExtractor::TryDepositSeed)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x58ad7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TryDepositSeed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.ValidateSeedDepositSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSeedExtractor::*)(int32_t, int32_t)>(&::GlobalNamespace::GRSeedExtractor::ValidateSeedDepositSucceeded)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58adcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ValidateSeedDepositSucceeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.SeedDepositSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t, int32_t)>(&::GlobalNamespace::GRSeedExtractor::SeedDepositSucceeded)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58adda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"SeedDepositSucceeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.SeedDepositFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t, int32_t)>(&::GlobalNamespace::GRSeedExtractor::SeedDepositFailed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58adf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"SeedDepositFailed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.RemovePendingSeedDeposit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t)>(&::GlobalNamespace::GRSeedExtractor::RemovePendingSeedDeposit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58ad6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"RemovePendingSeedDeposit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.ApplyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t, int32_t, int32_t, int32_t, float_t, float_t)>(&::GlobalNamespace::GRSeedExtractor::ApplyState)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x58adf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ApplyState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OpenStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(int32_t)>(&::GlobalNamespace::GRSeedExtractor::OpenStation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58ae12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OpenStation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.CloseStation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::CloseStation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58ac3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CloseStation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.UpdateOverdrivePurchaseButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::UpdateOverdrivePurchaseButtons)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58aa9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"UpdateOverdrivePurchaseButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnStateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::OnStateUpdated)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58ad27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnStateUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.DepositSeedVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::DepositSeedVisual)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58ae294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"DepositSeedVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.CompleteSeedVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::CompleteSeedVisual)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58ae520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CompleteSeedVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.ClearSeedVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::ClearSeedVisuals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58ab008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ClearSeedVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.UpdateScreenDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::UpdateScreenDisplay)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x58abf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"UpdateScreenDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.StepSeedVisualAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(float_t)>(&::GlobalNamespace::GRSeedExtractor::StepSeedVisualAnimation)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x58ab95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"StepSeedVisualAnimation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OverdrivePurchaseAnimationVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRSeedExtractor::*)(int32_t)>(&::GlobalNamespace::GRSeedExtractor::OverdrivePurchaseAnimationVisual)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58ae210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OverdrivePurchaseAnimationVisual", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnResearchPointsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::OnResearchPointsUpdated)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58ae5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnResearchPointsUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor.OnPurchaseOverdrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)(bool)>(&::GlobalNamespace::GRSeedExtractor::OnPurchaseOverdrive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58ae6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnPurchaseOverdrive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor::*)()>(&::GlobalNamespace::GRSeedExtractor::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x58ae760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_PROCESSING_TIME_SECONDS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PROCESSING_TIME_SECONDS;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_PROCESSING_TIME_SECONDS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PROCESSING_TIME_SECONDS;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_PROCESSING_TIME_SECONDS(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PROCESSING_TIME_SECONDS = value;
}
constexpr int32_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_MAX_OVERDRIVE_USES()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAX_OVERDRIVE_USES;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_MAX_OVERDRIVE_USES() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MAX_OVERDRIVE_USES;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_MAX_OVERDRIVE_USES(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MAX_OVERDRIVE_USES = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_triggerNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNotifier;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_triggerNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNotifier;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_triggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerNotifier = value;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_coreDepositTriggerNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreDepositTriggerNotifier;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_coreDepositTriggerNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreDepositTriggerNotifier;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_coreDepositTriggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreDepositTriggerNotifier = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_screenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_screenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenText = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_idCardScanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idCardScanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_idCardScanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idCardScanner;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_idCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idCardScanner = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_chaosSeedVisualPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaosSeedVisualPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_chaosSeedVisualPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaosSeedVisualPrefab;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_chaosSeedVisualPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaosSeedVisualPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchaseButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchaseButton;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdrivePurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdrivePurchaseButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveConfirmButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveConfirmButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveConfirmButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveConfirmButton;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveConfirmButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveConfirmButton = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_defaultButtonMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultButtonMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_defaultButtonMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultButtonMaterial;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_defaultButtonMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultButtonMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_redButtonMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redButtonMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_redButtonMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___redButtonMaterial;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_redButtonMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___redButtonMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_greenButtonMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenButtonMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_greenButtonMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greenButtonMaterial;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_greenButtonMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greenButtonMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorParent;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_shutterDoorParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shutterDoorParent = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorLiftRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorLiftRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorLiftRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorLiftRange;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_shutterDoorLiftRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shutterDoorLiftRange = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorAnimTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorAnimTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorAnimTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorAnimTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_shutterDoorAnimTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shutterDoorAnimTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingLiquidScaleParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingLiquidScaleParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingLiquidScaleParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingLiquidScaleParent;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_processingLiquidScaleParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingLiquidScaleParent = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingAmount;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingAmount;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_processingAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingAmount = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingAmountVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingAmountVisual;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingAmountVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingAmountVisual;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_processingAmountVisual(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingAmountVisual = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedTubeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedTubeStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedTubeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedTubeStart;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedTubeStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedTubeStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedTubeEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedTubeEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedTubeEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedTubeEnd;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedTubeEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedTubeEnd = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedProcessingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedProcessingPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedProcessingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedProcessingPosition;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedProcessingPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedProcessingPosition = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_tubeEndToProcessingPathY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tubeEndToProcessingPathY;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_tubeEndToProcessingPathY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tubeEndToProcessingPathY;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_tubeEndToProcessingPathY(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tubeEndToProcessingPathY = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_tubeEndToProcessingPathX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tubeEndToProcessingPathX;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_tubeEndToProcessingPathX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tubeEndToProcessingPathX;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_tubeEndToProcessingPathX(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tubeEndToProcessingPathX = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_visualChaosSeedRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualChaosSeedRadius;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_visualChaosSeedRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visualChaosSeedRadius;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_visualChaosSeedRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visualChaosSeedRadius = value;
}
constexpr int32_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_maxVisualChaosSeedCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVisualChaosSeedCount;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_maxVisualChaosSeedCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVisualChaosSeedCount;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_maxVisualChaosSeedCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVisualChaosSeedCount = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedVisualRollTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedVisualRollTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedVisualRollTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedVisualRollTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedVisualRollTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedVisualRollTime = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedVisualDropTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedVisualDropTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedVisualDropTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedVisualDropTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedVisualDropTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedVisualDropTime = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedVisualScaleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedVisualScaleRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedVisualScaleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedVisualScaleRange;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedVisualScaleRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedVisualScaleRange = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLiquidScaleParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLiquidScaleParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLiquidScaleParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLiquidScaleParent;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveLiquidScaleParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveLiquidScaleParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLightSpinnerOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLightSpinnerOff;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLightSpinnerOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLightSpinnerOff;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveLightSpinnerOff(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveLightSpinnerOff = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLightSpinnerOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLightSpinnerOn;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLightSpinnerOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLightSpinnerOn;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveLightSpinnerOn(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveLightSpinnerOn = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_enableDuringOverdrive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDuringOverdrive;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_enableDuringOverdrive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDuringOverdrive;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_enableDuringOverdrive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableDuringOverdrive = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_disableDuringOverdrive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDuringOverdrive;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_disableDuringOverdrive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDuringOverdrive;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_disableDuringOverdrive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableDuringOverdrive = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLightSpinRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLightSpinRate;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveLightSpinRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveLightSpinRate;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveLightSpinRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveLightSpinRate = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveAmount;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveAmount;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveAmount = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveAmountVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveAmountVisual;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveAmountVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveAmountVisual;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveAmountVisual(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveAmountVisual = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_depositorParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositorParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_depositorParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositorParticles;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_depositorParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositorParticles = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juicerSlowParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juicerSlowParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juicerSlowParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juicerSlowParticles;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_juicerSlowParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___juicerSlowParticles = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juicerOverdriveParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juicerOverdriveParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juicerOverdriveParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juicerOverdriveParticles;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_juicerOverdriveParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___juicerOverdriveParticles = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_depositorAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositorAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_depositorAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositorAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_depositorAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositorAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_doorAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedTubeAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedTubeAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedTubeAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedTubeAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedTubeAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedTubeAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juicerAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juicerAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juicerAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juicerAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_juicerAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___juicerAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_machineHumAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machineHumAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_machineHumAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machineHumAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_machineHumAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___machineHumAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveMeterAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveMeterAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveMeterAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveMeterAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveMeterAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveMeterAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveBeepAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveBeepAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveBeepAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveBeepAudioSource;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveBeepAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveBeepAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositFailedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositFailedAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositFailedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositFailedAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositFailedAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositFailedAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositFailedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositFailedVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositFailedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositFailedVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositFailedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositFailedVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositAttemptAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositAttemptAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositAttemptAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositAttemptAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositAttemptAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositAttemptAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositAttemptVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositAttemptVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositAttemptVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositAttemptVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositAttemptVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositAttemptVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedMovementAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedMovementAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedMovementAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedMovementAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedMovementAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedMovementAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedMovementVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedMovementVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedMovementVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedMovementVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedMovementVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedMovementVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDropAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDropAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDropAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDropAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDropAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDropAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDropVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDropVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDropVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDropVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDropVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDropVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedJuicingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedJuicingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedJuicingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedJuicingAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedJuicingAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedJuicingAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedJuicingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedJuicingVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedJuicingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedJuicingVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedJuicingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedJuicingVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorOpenAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorOpenAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_doorOpenAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorOpenVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorOpenVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorOpenVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_doorOpenVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorOpenVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorCloseAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorCloseAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_doorCloseAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorCloseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_doorCloseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorCloseVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_doorCloseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorCloseVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingHumAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingHumAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingHumAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingHumAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_processingHumAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingHumAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingHumVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingHumVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingHumVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingHumVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_processingHumVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingHumVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveFillAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveFillAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveFillAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveFillAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveFillAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveFillAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveFillVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveFillVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveFillVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveFillVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveFillVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveFillVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveEngineAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveEngineAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveEngineAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveEngineAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveEngineAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveEngineAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveEngineVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveEngineVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveEngineVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveEngineVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveEngineVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveEngineVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveBeepingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveBeepingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveBeepingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveBeepingAudio;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveBeepingAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveBeepingAudio = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveBeepingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveBeepingVolume;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveBeepingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveBeepingVolume;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveBeepingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveBeepingVolume = value;
}
constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_localPlayerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerData;
}
constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_localPlayerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerData;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_localPlayerData(::GlobalNamespace::GRSeedExtractor_PlayerData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerData = value;
}
constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_currentPlayerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlayerData;
}
constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_currentPlayerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlayerData;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_currentPlayerData(::GlobalNamespace::GRSeedExtractor_PlayerData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPlayerData = value;
}
constexpr ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_currentDisplayData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDisplayData;
}
constexpr ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_currentDisplayData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDisplayData;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_currentDisplayData(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDisplayData = value;
}
constexpr bool& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_stationOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationOpen;
}
constexpr bool const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_stationOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationOpen;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_stationOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stationOpen = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_stationOpenRequestTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationOpenRequestTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_stationOpenRequestTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationOpenRequestTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_stationOpenRequestTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stationOpenRequestTime = value;
}
constexpr int32_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_currentPlayerActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlayerActorNumber;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_currentPlayerActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPlayerActorNumber;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_currentPlayerActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPlayerActorNumber = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorOpenAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorOpenAmount;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_shutterDoorOpenAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterDoorOpenAmount;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_shutterDoorOpenAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shutterDoorOpenAmount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_chaosSeedVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaosSeedVisuals;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_chaosSeedVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaosSeedVisuals;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_chaosSeedVisuals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaosSeedVisuals = value;
}
constexpr bool& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchasePending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchasePending;
}
constexpr bool const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchasePending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchasePending;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdrivePurchasePending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdrivePurchasePending = value;
}
constexpr bool& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveServerConfirmationPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveServerConfirmationPending;
}
constexpr bool const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveServerConfirmationPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveServerConfirmationPending;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveServerConfirmationPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveServerConfirmationPending = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchaseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchaseTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchaseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchaseTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdrivePurchaseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdrivePurchaseTime = value;
}
constexpr bool& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveActive;
}
constexpr bool const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveActive;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveActive = value;
}
constexpr bool& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_drainingProcessingBeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainingProcessingBeaker;
}
constexpr bool const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_drainingProcessingBeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainingProcessingBeaker;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_drainingProcessingBeaker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainingProcessingBeaker = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_estimatedJuiceTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___estimatedJuiceTimeRemaining;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_estimatedJuiceTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___estimatedJuiceTimeRemaining;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_estimatedJuiceTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___estimatedJuiceTimeRemaining = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingLiquidFollowRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingLiquidFollowRate;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_processingLiquidFollowRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingLiquidFollowRate;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_processingLiquidFollowRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingLiquidFollowRate = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositsPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositsPending;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedDepositsPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedDepositsPending;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedDepositsPending(::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedDepositsPending = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchaseAnimationRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchaseAnimationRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdrivePurchaseAnimationRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdrivePurchaseAnimationRoutine;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdrivePurchaseAnimationRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdrivePurchaseAnimationRoutine = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedProcessingStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedProcessingStates;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_seedProcessingStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedProcessingStates;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_seedProcessingStates(::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedProcessingStates = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_timeBetweenServerRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenServerRequests;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_timeBetweenServerRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenServerRequests;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_timeBetweenServerRequests(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBetweenServerRequests = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_lastServerRequestTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerRequestTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_lastServerRequestTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerRequestTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_lastServerRequestTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastServerRequestTime = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_ghostReactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_ghostReactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactor;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_ghostReactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_toolProgressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_toolProgressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgressionManager;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolProgressionManager = value;
}
constexpr ::System::Text::StringBuilder*& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_UpdateScreenSB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateScreenSB;
}
constexpr ::System::Text::StringBuilder* const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_UpdateScreenSB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateScreenSB;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_UpdateScreenSB(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateScreenSB = value;
}
constexpr int32_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_debugSeedCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugSeedCount;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_debugSeedCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugSeedCount;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_debugSeedCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugSeedCount = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_debugSeedProcessingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugSeedProcessingTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_debugSeedProcessingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugSeedProcessingTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_debugSeedProcessingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugSeedProcessingTime = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveFillTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveFillTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveFillTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveFillTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveFillTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveFillTime = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveProcessTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveProcessTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_overdriveProcessTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overdriveProcessTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_overdriveProcessTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overdriveProcessTime = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juiceDepositTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juiceDepositTime;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor::__cordl_internal_get_juiceDepositTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___juiceDepositTime;
}
constexpr void GlobalNamespace::GRSeedExtractor::__cordl_internal_set_juiceDepositTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___juiceDepositTime = value;
}
inline bool GlobalNamespace::GRSeedExtractor::get_StationOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"get_StationOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSeedExtractor::get_StationOpenForLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"get_StationOpenForLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRSeedExtractor::get_CurrentPlayerActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"get_CurrentPlayerActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::Init(::GlobalNamespace::GRToolProgressionManager*  progression, ::GlobalNamespace::GhostReactor*  gr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GRToolProgressionManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progression, gr);
}
inline void GlobalNamespace::GRSeedExtractor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::ValidateCurrentPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ValidateCurrentPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::GRSeedExtractor::TriggerExited(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TriggerExited", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::GRSeedExtractor::OnPlayerCardSwipe(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnPlayerCardSwipe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber);
}
inline void GlobalNamespace::GRSeedExtractor::DepositorTriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"DepositorTriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::GRSeedExtractor::OverdrivePurchaseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OverdrivePurchaseButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSeedExtractor::LocalPlayerCanPurchaseOverdrive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"LocalPlayerCanPurchaseOverdrive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::OverdrivePurchaseConfirmButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OverdrivePurchaseConfirmButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::OnPlayerStatusReceived(::GlobalNamespace::ProgressionManager_JuicerStatusResponse*  statusResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnPlayerStatusReceived", {}, {::i2c::type_of<::GlobalNamespace::ProgressionManager_JuicerStatusResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusResponse);
}
inline void GlobalNamespace::GRSeedExtractor::TryDepositSeedServerResponse(bool  succeeded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TryDepositSeedServerResponse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, succeeded);
}
inline void GlobalNamespace::GRSeedExtractor::CardSwipeSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CardSwipeSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::CardSwipeFail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CardSwipeFail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::TryDepositSeed(int32_t  playerActorNumber, int32_t  seedNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"TryDepositSeed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber, seedNetId);
}
inline bool GlobalNamespace::GRSeedExtractor::ValidateSeedDepositSucceeded(int32_t  playerActorNumber, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ValidateSeedDepositSucceeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerActorNumber, entityNetId);
}
inline void GlobalNamespace::GRSeedExtractor::SeedDepositSucceeded(int32_t  playerActorNumber, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"SeedDepositSucceeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber, entityNetId);
}
inline void GlobalNamespace::GRSeedExtractor::SeedDepositFailed(int32_t  playerActorNumber, int32_t  entityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"SeedDepositFailed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber, entityNetId);
}
inline void GlobalNamespace::GRSeedExtractor::RemovePendingSeedDeposit(int32_t  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"RemovePendingSeedDeposit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId);
}
inline void GlobalNamespace::GRSeedExtractor::ApplyState(int32_t  playerActorNumber, int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ApplyState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber, coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply);
}
inline void GlobalNamespace::GRSeedExtractor::OpenStation(int32_t  playerActorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OpenStation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerActorNumber);
}
inline void GlobalNamespace::GRSeedExtractor::CloseStation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CloseStation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::UpdateOverdrivePurchaseButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"UpdateOverdrivePurchaseButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::OnStateUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnStateUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::DepositSeedVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"DepositSeedVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::CompleteSeedVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"CompleteSeedVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::ClearSeedVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"ClearSeedVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::UpdateScreenDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"UpdateScreenDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::StepSeedVisualAnimation(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"StepSeedVisualAnimation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRSeedExtractor::OverdrivePurchaseAnimationVisual(int32_t  coresToProcess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OverdrivePurchaseAnimationVisual", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, coresToProcess);
}
inline void GlobalNamespace::GRSeedExtractor::OnResearchPointsUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnResearchPointsUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor::OnPurchaseOverdrive(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {"OnPurchaseOverdrive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::GRSeedExtractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSeedExtractor* GlobalNamespace::GRSeedExtractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSeedExtractor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSeedExtractor::GRSeedExtractor()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::*)(int32_t)>(&::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58aea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::*)()>(&::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58aea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::*)()>(&::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::MoveNext)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x58aea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::*)()>(&::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58af310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::*)()>(&::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58af318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::*)()>(&::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58af350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor>& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor> const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRSeedExtractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get_coresToProcess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresToProcess;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get_coresToProcess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresToProcess;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set_coresToProcess(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresToProcess = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__overdriveFillRate_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overdriveFillRate_5__2;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__overdriveFillRate_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overdriveFillRate_5__2;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__overdriveFillRate_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overdriveFillRate_5__2 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__maxOverdriveFill_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOverdriveFill_5__3;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__maxOverdriveFill_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxOverdriveFill_5__3;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__maxOverdriveFill_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxOverdriveFill_5__3 = value;
}
constexpr int32_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__i_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr int32_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__i_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__i_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__4 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__waitForSeedDepositStartTime_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitForSeedDepositStartTime_5__5;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__waitForSeedDepositStartTime_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitForSeedDepositStartTime_5__5;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__waitForSeedDepositStartTime_5__5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitForSeedDepositStartTime_5__5 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__timeToProcess_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeToProcess_5__6;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__timeToProcess_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeToProcess_5__6;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__timeToProcess_5__6(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeToProcess_5__6 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__startingProcessingAmount_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingProcessingAmount_5__7;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__startingProcessingAmount_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingProcessingAmount_5__7;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__startingProcessingAmount_5__7(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingProcessingAmount_5__7 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__startingOverdrive_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingOverdrive_5__8;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__startingOverdrive_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startingOverdrive_5__8;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__startingOverdrive_5__8(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startingOverdrive_5__8 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__resultingOverdrive_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultingOverdrive_5__9;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__resultingOverdrive_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultingOverdrive_5__9;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__resultingOverdrive_5__9(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultingOverdrive_5__9 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__timeProcessing_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProcessing_5__10;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__timeProcessing_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProcessing_5__10;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__timeProcessing_5__10(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProcessing_5__10 = value;
}
constexpr float_t& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__timeDepositing_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeDepositing_5__11;
}
constexpr float_t const& GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_get__timeDepositing_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeDepositing_5__11;
}
constexpr void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::__cordl_internal_set__timeDepositing_5__11(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeDepositing_5__11 = value;
}
inline void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135* GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135()   {
}
