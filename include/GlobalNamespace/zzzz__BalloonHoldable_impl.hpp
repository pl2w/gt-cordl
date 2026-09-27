#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonHoldable.hpp"
#include "GlobalNamespace/zzzz__BalloonHoldable_BalloonStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BalloonHoldable_def.hpp"
#include "GlobalNamespace/zzzz__BalloonHoldable_BalloonStates_def.hpp"
#include "GlobalNamespace/zzzz__BalloonHoldable_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__IFXContext_def.hpp"
#include "GlobalNamespace/zzzz__ITetheredObjectBehavior_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::BalloonHoldable::OnSpawn)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5718168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57182ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5718494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57189c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.ShouldSimulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::ShouldSimulate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5718a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"ShouldSimulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5718a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.PreDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::PreDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5718ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::ResetToDefaultState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5718ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnWorldShareableItemSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OnWorldShareableItemSpawn)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5718b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.ResetToHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::ResetToHome)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5718cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.PlayDestroyedOrDisabledEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::PlayDestroyedOrDisabledEffect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5719184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnItemDestroyedOrDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OnItemDestroyedOrDisabled)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x57191f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.PlayPopBalloonFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::PlayPopBalloonFX)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57191c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"PlayPopBalloonFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.EnableDynamics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)(bool, bool, bool)>(&::GlobalNamespace::BalloonHoldable::EnableDynamics)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x57182d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"EnableDynamics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.PopBalloon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::PopBalloon)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5718e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"PopBalloon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.PopBalloonRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::PopBalloonRemote)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5719564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"PopBalloonRemote", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnOwnerChangeCb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::BalloonHoldable::OnOwnerChangeCb)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5719590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OnOwnerChangeCb", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::BalloonHoldable::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5719594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OwnerPopBalloon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OwnerPopBalloon)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5719840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OwnerPopBalloon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.RunLocalPopSM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::RunLocalPopSM)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5719984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"RunLocalPopSM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::OnStateChanged)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5719dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::LateUpdateShared)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5719f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571a274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.Grab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::Grab)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x57185dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"Grab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::Release)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5718800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BalloonHoldable::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x571a27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::BalloonHoldable::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x571a5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.IFXContext_get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FXSystemSettings> (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::IFXContext_get_settings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x571a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"IFXContext.get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable.IFXContext_OnPlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::IFXContext_OnPlayFX)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x571a6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"IFXContext.OnPlayFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable::*)()>(&::GlobalNamespace::BalloonHoldable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x571a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ITetheredObjectBehavior*& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonDynamics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonDynamics;
}
constexpr ::GlobalNamespace::ITetheredObjectBehavior* const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonDynamics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonDynamics;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_balloonDynamics(::GlobalNamespace::ITetheredObjectBehavior*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonDynamics = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::BalloonHoldable::__cordl_internal_get_originalOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalOwner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_originalOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalOwner;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_originalOwner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalOwner = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonPopFXPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonPopFXPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonPopFXPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonPopFXPrefab;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_balloonPopFXPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonPopFXPrefab = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonPopFXColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonPopFXColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonPopFXColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonPopFXColor;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_balloonPopFXColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonPopFXColor = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_scaleTimerLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTimerLength;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_scaleTimerLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTimerLength;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_scaleTimerLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleTimerLength = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_poppedTimerLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poppedTimerLength;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_poppedTimerLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poppedTimerLength;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_poppedTimerLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poppedTimerLength = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_beginScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginScale;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_beginScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginScale;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_beginScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beginScale = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_bopSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bopSpeed;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_bopSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bopSpeed;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_bopSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bopSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BalloonHoldable::__cordl_internal_get_fullyInflatedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyInflatedScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_fullyInflatedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyInflatedScale;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_fullyInflatedScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullyInflatedScale = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonBopSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonBopSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonBopSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonBopSource;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_balloonBopSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonBopSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonInflatSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonInflatSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonInflatSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonInflatSource;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_balloonInflatSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonInflatSource = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BalloonHoldable::__cordl_internal_get_forceAppliedAsRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceAppliedAsRemote;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_forceAppliedAsRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceAppliedAsRemote;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_forceAppliedAsRemote(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceAppliedAsRemote = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BalloonHoldable::__cordl_internal_get_collisionPtAsRemote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionPtAsRemote;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_collisionPtAsRemote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionPtAsRemote;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_collisionPtAsRemote(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionPtAsRemote = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GlobalNamespace::BalloonHoldable::__cordl_internal_get_waterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_waterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_waterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterVolume = value;
}
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonState;
}
constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_balloonState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balloonState;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_balloonState(::GlobalNamespace::BalloonHoldable_BalloonStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balloonState = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_returnTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnTimer;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_returnTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnTimer;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_returnTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnTimer = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_maxDistanceFromOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromOwner;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_maxDistanceFromOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromOwner;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_maxDistanceFromOwner(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromOwner = value;
}
constexpr float_t& GlobalNamespace::BalloonHoldable::__cordl_internal_get_lastOwnershipRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOwnershipRequest;
}
constexpr float_t const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_lastOwnershipRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOwnershipRequest;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_lastOwnershipRequest(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastOwnershipRequest = value;
}
constexpr bool& GlobalNamespace::BalloonHoldable::__cordl_internal_get_disableCollisionHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableCollisionHandling;
}
constexpr bool const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_disableCollisionHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableCollisionHandling;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_disableCollisionHandling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableCollisionHandling = value;
}
constexpr bool& GlobalNamespace::BalloonHoldable::__cordl_internal_get_disableRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableRelease;
}
constexpr bool const& GlobalNamespace::BalloonHoldable::__cordl_internal_get_disableRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableRelease;
}
constexpr void GlobalNamespace::BalloonHoldable::__cordl_internal_set_disableRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableRelease = value;
}
inline void GlobalNamespace::BalloonHoldable::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::BalloonHoldable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BalloonHoldable::ShouldSimulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"ShouldSimulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::PreDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::ResetToDefaultState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnWorldShareableItemSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::ResetToHome()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::PlayDestroyedOrDisabledEffect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnItemDestroyedOrDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::PlayPopBalloonFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"PlayPopBalloonFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::EnableDynamics(bool  enable, bool  collider, bool  forceKinematicOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"EnableDynamics", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, collider, forceKinematicOn);
}
inline void GlobalNamespace::BalloonHoldable::PopBalloon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"PopBalloon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::PopBalloonRemote()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"PopBalloonRemote", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnOwnerChangeCb(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OnOwnerChangeCb", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, prevOwner);
}
inline void GlobalNamespace::BalloonHoldable::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, prevOwner);
}
inline void GlobalNamespace::BalloonHoldable::OwnerPopBalloon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OwnerPopBalloon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::RunLocalPopSM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"RunLocalPopSM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnStateChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::Grab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"Grab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BalloonHoldable::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::BalloonHoldable::IFXContext_get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"IFXContext.get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::IFXContext_OnPlayFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {"IFXContext.OnPlayFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BalloonHoldable* GlobalNamespace::BalloonHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BalloonHoldable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFXContext"
constexpr  GlobalNamespace::BalloonHoldable::operator ::GlobalNamespace::IFXContext*() noexcept {
return static_cast<::GlobalNamespace::IFXContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFXContext"
constexpr ::GlobalNamespace::IFXContext* GlobalNamespace::BalloonHoldable::i___GlobalNamespace__IFXContext() noexcept {
return static_cast<::GlobalNamespace::IFXContext*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BalloonHoldable::BalloonHoldable()   {
}
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable___c::*)()>(&::GlobalNamespace::BalloonHoldable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x571a978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BalloonHoldable___c._OnTriggerEnter_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BalloonHoldable___c::*)()>(&::GlobalNamespace::BalloonHoldable___c::_OnTriggerEnter_b__50_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x571a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable___c*>(),
                        {"<OnTriggerEnter>b__50_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BalloonHoldable___c::setStaticF___9(::GlobalNamespace::BalloonHoldable___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::BalloonHoldable___c*, "<>9", ::GlobalNamespace::BalloonHoldable___c*>(std::forward<::GlobalNamespace::BalloonHoldable___c*>(value));
}
inline ::GlobalNamespace::BalloonHoldable___c* GlobalNamespace::BalloonHoldable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::BalloonHoldable___c*, "<>9", ::GlobalNamespace::BalloonHoldable___c*>();
}
inline void GlobalNamespace::BalloonHoldable___c::setStaticF___9__50_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__50_0", ::GlobalNamespace::BalloonHoldable___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::BalloonHoldable___c::getStaticF___9__50_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__50_0", ::GlobalNamespace::BalloonHoldable___c*>();
}
inline void GlobalNamespace::BalloonHoldable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BalloonHoldable___c::_OnTriggerEnter_b__50_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BalloonHoldable___c*>(),
                        {"<OnTriggerEnter>b__50_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BalloonHoldable___c* GlobalNamespace::BalloonHoldable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BalloonHoldable___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BalloonHoldable___c::BalloonHoldable___c()   {
}
