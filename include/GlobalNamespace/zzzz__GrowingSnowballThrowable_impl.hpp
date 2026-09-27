#pragma once
// IWYU pragma private; include "GlobalNamespace/GrowingSnowballThrowable.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GrowingSnowballThrowable_def.hpp"
#include "GlobalNamespace/zzzz__GrowingSnowballThrowable_AOERangeDebugDraw_def.hpp"
#include "GlobalNamespace/zzzz__GrowingSnowballThrowable_SizeParameters_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__PhotonEvent_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SnowballKnockbackEnabler_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.get_SizeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::get_SizeLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfeecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_SizeLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.get_MaxSizeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::get_MaxSizeLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dfeed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_MaxSizeLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.get_IsAOEEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GrowingSnowballThrowable::get_IsAOEEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5dfef24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_IsAOEEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.NotifyEnableKnockbackIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SnowballKnockbackEnabler*)>(&::GlobalNamespace::GrowingSnowballThrowable::NotifyEnableKnockbackIntent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5dfefa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"NotifyEnableKnockbackIntent", {}, {::i2c::type_of<::GlobalNamespace::SnowballKnockbackEnabler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.NotifyDisableKnockbackIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SnowballKnockbackEnabler*)>(&::GlobalNamespace::GrowingSnowballThrowable::NotifyDisableKnockbackIntent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5dff148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"NotifyDisableKnockbackIntent", {}, {::i2c::type_of<::GlobalNamespace::SnowballKnockbackEnabler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.get_CurrentSnowballRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::get_CurrentSnowballRadius)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5dff254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_CurrentSnowballRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::Awake)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5dff330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::OnEnable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5dff888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e002cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.VRRigActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::GrowingSnowballThrowable::VRRigActivated)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e00494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"VRRigActivated", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.VRRigDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::GrowingSnowballThrowable::VRRigDeactivated)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e005a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"VRRigDeactivated", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.StartedMultiplayerSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::StartedMultiplayerSession)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e00630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"StartedMultiplayerSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.CreatePhotonEventsIfNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::CreatePhotonEventsIfNull)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5dffd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"CreatePhotonEventsIfNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.DestroyPhotonEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::DestroyPhotonEvents)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5e002d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"DestroyPhotonEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.IncreaseSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(int32_t)>(&::GlobalNamespace::GrowingSnowballThrowable::IncreaseSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e00710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"IncreaseSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.SetSizeLevelAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(int32_t)>(&::GlobalNamespace::GrowingSnowballThrowable::SetSizeLevelAuthority)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e0071c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SetSizeLevelAuthority", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.GetValidSizeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GrowingSnowballThrowable::*)(int32_t)>(&::GlobalNamespace::GrowingSnowballThrowable::GetValidSizeLevel)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e00888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"GetValidSizeLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.SetSizeLevelLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(int32_t)>(&::GlobalNamespace::GrowingSnowballThrowable::SetSizeLevelLocal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5dffc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SetSizeLevelLocal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.ChangeSizeEventReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GrowingSnowballThrowable::ChangeSizeEventReceiver)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5e008ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"ChangeSizeEventReceiver", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.SnowballThrowEventReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GrowingSnowballThrowable::SnowballThrowEventReceiver)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5e00b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SnowballThrowEventReceiver", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5e00eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.OnSnowballRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::OnSnowballRelease)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e01834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.PerformSnowballThrowAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::PerformSnowballThrowAuthority)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5e01868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.LaunchSnowballLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::GrowingSnowballThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballLocal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e01cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.LaunchSnowballLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::GrowingSnowballThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool, ::UnityEngine::Color)>(&::GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballLocal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5e01d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.LaunchSnowballRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::GrowingSnowballThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballRemote)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e02230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.LaunchSnowballRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::GrowingSnowballThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, bool, ::UnityEngine::Color, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballRemote)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e02274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.SpawnGrowingSnowball
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::GrowingSnowballThrowable::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::GrowingSnowballThrowable::SpawnGrowingSnowball)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5e01f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SpawnGrowingSnowball", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GrowingSnowballThrowable::OnGrab)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5e02448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GrowingSnowballThrowable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GrowingSnowballThrowable::*)()>(&::GlobalNamespace::GrowingSnowballThrowable::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e02b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballModelParentTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballModelParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballModelParentTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballModelParentTransform;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_snowballModelParentTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballModelParentTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballModelTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballModelTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballModelTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballModelTransform;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_snowballModelTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballModelTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_modelParentOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelParentOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_modelParentOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelParentOffset;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_modelParentOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelParentOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_modelOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_modelOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelOffset;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_modelOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelOffset = value;
}
constexpr float_t& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_modelRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelRadius;
}
constexpr float_t const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_modelRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelRadius;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_modelRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelRadius = value;
}
constexpr float_t& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_combineBasedOnSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineBasedOnSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_combineBasedOnSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combineBasedOnSpeedThreshold;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_combineBasedOnSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combineBasedOnSpeedThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_sizeIncreaseSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeIncreaseSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_sizeIncreaseSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeIncreaseSoundBankPlayer;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_sizeIncreaseSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeIncreaseSoundBankPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballSizeLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballSizeLevels;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>* const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballSizeLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballSizeLevels;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_snowballSizeLevels(::System::Collections::Generic::List_1<::GlobalNamespace::GrowingSnowballThrowable_SizeParameters>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballSizeLevels = value;
}
constexpr int32_t& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_sizeLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeLevel;
}
constexpr int32_t const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_sizeLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeLevel;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_sizeLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeLevel = value;
}
constexpr float_t& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_maintainSizeLevelUntilLocalTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintainSizeLevelUntilLocalTime;
}
constexpr float_t const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_maintainSizeLevelUntilLocalTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintainSizeLevelUntilLocalTime;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_maintainSizeLevelUntilLocalTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maintainSizeLevelUntilLocalTime = value;
}
constexpr ::GlobalNamespace::PhotonEvent*& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_changeSizeEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeSizeEvent;
}
constexpr ::GlobalNamespace::PhotonEvent* const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_changeSizeEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeSizeEvent;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_changeSizeEvent(::GlobalNamespace::PhotonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeSizeEvent = value;
}
constexpr ::GlobalNamespace::PhotonEvent*& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballThrowEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballThrowEvent;
}
constexpr ::GlobalNamespace::PhotonEvent* const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_snowballThrowEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballThrowEvent;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_snowballThrowEvent(::GlobalNamespace::PhotonEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballThrowEvent = value;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>*& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_aoeRangeDebugDrawQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoeRangeDebugDrawQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>* const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_aoeRangeDebugDrawQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoeRangeDebugDrawQueue;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_aoeRangeDebugDrawQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::GrowingSnowballThrowable_AOERangeDebugDraw>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aoeRangeDebugDrawQueue = value;
}
constexpr ::UnityW<::GlobalNamespace::GrowingSnowballThrowable>& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_otherHandSnowball()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherHandSnowball;
}
constexpr ::UnityW<::GlobalNamespace::GrowingSnowballThrowable> const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_otherHandSnowball() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherHandSnowball;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_otherHandSnowball(::UnityW<::GlobalNamespace::GrowingSnowballThrowable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherHandSnowball = value;
}
constexpr float_t& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_debugDrawAOERangeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawAOERangeTime;
}
constexpr float_t const& GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_get_debugDrawAOERangeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawAOERangeTime;
}
constexpr void GlobalNamespace::GrowingSnowballThrowable::__cordl_internal_set_debugDrawAOERangeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawAOERangeTime = value;
}
inline void GlobalNamespace::GrowingSnowballThrowable::setStaticF_debugDrawAOERange(bool  value)  {
::cordl_internals::setStaticField<bool, "debugDrawAOERange", ::GlobalNamespace::GrowingSnowballThrowable*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GrowingSnowballThrowable::getStaticF_debugDrawAOERange()  {
return ::cordl_internals::getStaticField<bool, "debugDrawAOERange", ::GlobalNamespace::GrowingSnowballThrowable*>();
}
inline void GlobalNamespace::GrowingSnowballThrowable::setStaticF_twoHandedSnowballGrowing(bool  value)  {
::cordl_internals::setStaticField<bool, "twoHandedSnowballGrowing", ::GlobalNamespace::GrowingSnowballThrowable*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GrowingSnowballThrowable::getStaticF_twoHandedSnowballGrowing()  {
return ::cordl_internals::getStaticField<bool, "twoHandedSnowballGrowing", ::GlobalNamespace::GrowingSnowballThrowable*>();
}
inline void GlobalNamespace::GrowingSnowballThrowable::setStaticF_k_useAOE(bool  value)  {
::cordl_internals::setStaticField<bool, "k_useAOE", ::GlobalNamespace::GrowingSnowballThrowable*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GrowingSnowballThrowable::getStaticF_k_useAOE()  {
return ::cordl_internals::getStaticField<bool, "k_useAOE", ::GlobalNamespace::GrowingSnowballThrowable*>();
}
inline void GlobalNamespace::GrowingSnowballThrowable::setStaticF_ForceAOEEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "ForceAOEEnabled", ::GlobalNamespace::GrowingSnowballThrowable*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GrowingSnowballThrowable::getStaticF_ForceAOEEnabled()  {
return ::cordl_internals::getStaticField<bool, "ForceAOEEnabled", ::GlobalNamespace::GrowingSnowballThrowable*>();
}
inline void GlobalNamespace::GrowingSnowballThrowable::setStaticF_s_KnockSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>*, "s_KnockSources", ::GlobalNamespace::GrowingSnowballThrowable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>* GlobalNamespace::GrowingSnowballThrowable::getStaticF_s_KnockSources()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballKnockbackEnabler>>*, "s_KnockSources", ::GlobalNamespace::GrowingSnowballThrowable*>();
}
inline int32_t GlobalNamespace::GrowingSnowballThrowable::get_SizeLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_SizeLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GrowingSnowballThrowable::get_MaxSizeLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_MaxSizeLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GrowingSnowballThrowable::get_IsAOEEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_IsAOEEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::NotifyEnableKnockbackIntent(::GlobalNamespace::SnowballKnockbackEnabler*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"NotifyEnableKnockbackIntent", {}, {::i2c::type_of<::GlobalNamespace::SnowballKnockbackEnabler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void GlobalNamespace::GrowingSnowballThrowable::NotifyDisableKnockbackIntent(::GlobalNamespace::SnowballKnockbackEnabler*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"NotifyDisableKnockbackIntent", {}, {::i2c::type_of<::GlobalNamespace::SnowballKnockbackEnabler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline float_t GlobalNamespace::GrowingSnowballThrowable::get_CurrentSnowballRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"get_CurrentSnowballRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::VRRigActivated(::GlobalNamespace::RigContainer*  rigContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"VRRigActivated", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigContainer);
}
inline void GlobalNamespace::GrowingSnowballThrowable::VRRigDeactivated(::GlobalNamespace::RigContainer*  rigContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"VRRigDeactivated", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigContainer);
}
inline void GlobalNamespace::GrowingSnowballThrowable::StartedMultiplayerSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"StartedMultiplayerSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::CreatePhotonEventsIfNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"CreatePhotonEventsIfNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::DestroyPhotonEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"DestroyPhotonEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::IncreaseSize(int32_t  increase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"IncreaseSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, increase);
}
inline void GlobalNamespace::GrowingSnowballThrowable::SetSizeLevelAuthority(int32_t  sizeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SetSizeLevelAuthority", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeLevel);
}
inline int32_t GlobalNamespace::GrowingSnowballThrowable::GetValidSizeLevel(int32_t  inputSizeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"GetValidSizeLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputSizeLevel);
}
inline void GlobalNamespace::GrowingSnowballThrowable::SetSizeLevelLocal(int32_t  sizeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SetSizeLevelLocal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeLevel);
}
inline void GlobalNamespace::GrowingSnowballThrowable::ChangeSizeEventReceiver(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"ChangeSizeEventReceiver", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, receiver, args, info);
}
inline void GlobalNamespace::GrowingSnowballThrowable::SnowballThrowEventReceiver(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SnowballThrowEventReceiver", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, receiver, args, info);
}
inline void GlobalNamespace::GrowingSnowballThrowable::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::OnSnowballRelease()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GrowingSnowballThrowable::PerformSnowballThrowAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballLocal(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, location, velocity, scale);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballLocal(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, bool  randomizeColour, ::UnityEngine::Color  colour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, location, velocity, scale, randomizeColour, colour);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballRemote(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, int32_t  index, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, location, velocity, scale, index, info);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::GrowingSnowballThrowable::LaunchSnowballRemote(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, int32_t  index, bool  randomizeColour, ::UnityEngine::Color  colour, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, location, velocity, scale, index, randomizeColour, colour, info);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::GrowingSnowballThrowable::SpawnGrowingSnowball(::by_ref<::UnityEngine::Vector3>  velocity, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {"SpawnGrowingSnowball", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, velocity, scale);
}
inline void GlobalNamespace::GrowingSnowballThrowable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::GrowingSnowballThrowable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GrowingSnowballThrowable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GrowingSnowballThrowable* GlobalNamespace::GrowingSnowballThrowable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GrowingSnowballThrowable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GrowingSnowballThrowable::GrowingSnowballThrowable()   {
}
