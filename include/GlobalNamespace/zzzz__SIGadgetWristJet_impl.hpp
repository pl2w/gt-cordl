#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWristJet.hpp"
#include "GlobalNamespace/zzzz__GTRendererMatSlot_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_State_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_WristJetType_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeBasedGeneric_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__IEnergyGadget_def.hpp"
#include "GlobalNamespace/zzzz__I_SIDisruptable_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_WristJetType_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.get_CanRecharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::get_CanRecharge)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59d4b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"get_CanRecharge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::Awake)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x59d4b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::Start)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x59d5094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59d52ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::OnDisable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59d52e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59d5330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::FixedUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59d53fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.HandleStopInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::HandleStopInteraction)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59d56d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"HandleStopInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(float_t)>(&::GlobalNamespace::SIGadgetWristJet::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x59d5740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.UpdateThrottleIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::UpdateThrottleIndicator)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x59d5a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"UpdateThrottleIndicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet._ApplyClampedThrust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::_ApplyClampedThrust)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59d552c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"_ApplyClampedThrust", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.OnEntityStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(int64_t, int64_t)>(&::GlobalNamespace::SIGadgetWristJet::OnEntityStateChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d5bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(::GlobalNamespace::SIGadgetWristJet_State)>(&::GlobalNamespace::SIGadgetWristJet::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59d5708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetWristJet_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(::GlobalNamespace::SIGadgetWristJet_State)>(&::GlobalNamespace::SIGadgetWristJet::SetState)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59d5bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetWristJet_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetWristJet::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59d5c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.Disrupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(float_t)>(&::GlobalNamespace::SIGadgetWristJet::Disrupt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59d5de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::OnEntityInit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59d5df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.get_UsesEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::get_UsesEnergy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d5e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"get_UsesEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::get_IsFull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d5e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"get_IsFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet.UpdateRecharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)(float_t)>(&::GlobalNamespace::SIGadgetWristJet::UpdateRecharge)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59d5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"UpdateRecharge", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWristJet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWristJet::*)()>(&::GlobalNamespace::SIGadgetWristJet::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59d5ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopAudioSource;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_thrustLoopAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_thrustLoopAudioSource = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__hasThrustLoopAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasThrustLoopAudioSource;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__hasThrustLoopAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasThrustLoopAudioSource;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__hasThrustLoopAudioSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasThrustLoopAudioSource = value;
}
constexpr ::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopSoundByUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopSoundByUpgrade;
}
constexpr ::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopSoundByUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopSoundByUpgrade;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_thrustLoopSoundByUpgrade(::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_thrustLoopSoundByUpgrade = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopAudioFadeInTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopAudioFadeInTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopAudioFadeInTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopAudioFadeInTime;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_thrustLoopAudioFadeInTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_thrustLoopAudioFadeInTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopAudioFadeOutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopAudioFadeOutTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopAudioFadeOutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopAudioFadeOutTime;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_thrustLoopAudioFadeOutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_thrustLoopAudioFadeOutTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopSoundVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_thrustLoopSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_thrustLoopSoundVolume;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_thrustLoopSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_thrustLoopSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_warnFuelLowSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_warnFuelLowSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_warnFuelLowSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_warnFuelLowSound;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_warnFuelLowSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_warnFuelLowSound = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_warnFuelLowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_warnFuelLowThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_warnFuelLowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_warnFuelLowThreshold;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_warnFuelLowThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_warnFuelLowThreshold = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_warnFuelLowSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_warnFuelLowSoundVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_warnFuelLowSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_warnFuelLowSoundVolume;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_warnFuelLowSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_warnFuelLowSoundVolume = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__warnFuelLowSoundWasPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____warnFuelLowSoundWasPlayed;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__warnFuelLowSoundWasPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____warnFuelLowSoundWasPlayed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__warnFuelLowSoundWasPlayed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____warnFuelLowSoundWasPlayed = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_gaugeMatSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gaugeMatSlots;
}
constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_gaugeMatSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gaugeMatSlots;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_gaugeMatSlots(::ArrayW<::GlobalNamespace::GTRendererMatSlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gaugeMatSlots = value;
}
constexpr ::GlobalNamespace::SIGadgetWristJet_WristJetType& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_jetType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jetType;
}
constexpr ::GlobalNamespace::SIGadgetWristJet_WristJetType const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_jetType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jetType;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_jetType(::GlobalNamespace::SIGadgetWristJet_WristJetType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jetType = value;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonActivatable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_inactiveStateVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveStateVisual;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_inactiveStateVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveStateVisual;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_inactiveStateVisual(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactiveStateVisual = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__hasInactiveStateVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInactiveStateVisual;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__hasInactiveStateVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasInactiveStateVisual;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__hasInactiveStateVisual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasInactiveStateVisual = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_activeStateVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeStateVisual;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_activeStateVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeStateVisual;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_activeStateVisual(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeStateVisual = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__hasActiveStateVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasActiveStateVisual;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__hasActiveStateVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasActiveStateVisual;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__hasActiveStateVisual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasActiveStateVisual = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_jetForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jetForce;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_jetForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jetForce;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_jetForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jetForce = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_fuelGainRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelGainRate;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_fuelGainRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelGainRate;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_fuelGainRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fuelGainRate = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_fuelSpendRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelSpendRate;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_fuelSpendRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelSpendRate;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_fuelSpendRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fuelSpendRate = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_emptiedCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptiedCooldown;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_emptiedCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptiedCooldown;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_emptiedCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptiedCooldown = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_gravityNegationPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityNegationPercent;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_gravityNegationPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityNegationPercent;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_gravityNegationPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityNegationPercent = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_maxVerticalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVerticalSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_maxVerticalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVerticalSpeed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_maxVerticalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVerticalSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_maxHorizontalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHorizontalSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_maxHorizontalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHorizontalSpeed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_maxHorizontalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHorizontalSpeed = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_rechargeRequiresFloorTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeRequiresFloorTouch;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_rechargeRequiresFloorTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeRequiresFloorTouch;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_rechargeRequiresFloorTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeRequiresFloorTouch = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_throttleChangeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttleChangeSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_throttleChangeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttleChangeSpeed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_throttleChangeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throttleChangeSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_minimumBurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumBurnRate;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_minimumBurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumBurnRate;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_minimumBurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumBurnRate = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_throttleFlapXforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_throttleFlapXforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_throttleFlapXforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_throttleFlapXforms;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_throttleFlapXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_throttleFlapXforms = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_throttleFlapInitialRots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttleFlapInitialRots;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_throttleFlapInitialRots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttleFlapInitialRots;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_throttleFlapInitialRots(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throttleFlapInitialRots = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_throttleFlapMaxRotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_throttleFlapMaxRotOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_m_throttleFlapMaxRotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_throttleFlapMaxRotOffset;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_m_throttleFlapMaxRotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_throttleFlapMaxRotOffset = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_fuelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelSize;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_fuelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fuelSize;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_fuelSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fuelSize = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_currentFuel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFuel;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_currentFuel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFuel;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_currentFuel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFuel = value;
}
constexpr ::GlobalNamespace::SIGadgetWristJet_State& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::SIGadgetWristJet_State const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_state(::GlobalNamespace::SIGadgetWristJet_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_gtPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gtPlayer;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_gtPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gtPlayer;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_gtPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gtPlayer = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_emptiedCooldownResetProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptiedCooldownResetProgress;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get_emptiedCooldownResetProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptiedCooldownResetProgress;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set_emptiedCooldownResetProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptiedCooldownResetProgress = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__floorTouched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floorTouched;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__floorTouched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floorTouched;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__floorTouched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floorTouched = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__maxSqrHorizontalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSqrHorizontalSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__maxSqrHorizontalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSqrHorizontalSpeed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__maxSqrHorizontalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSqrHorizontalSpeed = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__gaugeMatPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gaugeMatPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__gaugeMatPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gaugeMatPropBlock;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__gaugeMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gaugeMatPropBlock = value;
}
constexpr bool& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__throttleControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throttleControl;
}
constexpr bool const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__throttleControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throttleControl;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__throttleControl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throttleControl = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__throttle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throttle;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__throttle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throttle;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__throttle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throttle = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__currentBurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBurnRate;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__currentBurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBurnRate;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__currentBurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentBurnRate = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseFuelSpendRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseFuelSpendRate;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseFuelSpendRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseFuelSpendRate;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__baseFuelSpendRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseFuelSpendRate = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseJetForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseJetForce;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseJetForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseJetForce;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__baseJetForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseJetForce = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseMaxVerticalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMaxVerticalSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseMaxVerticalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMaxVerticalSpeed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__baseMaxVerticalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseMaxVerticalSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseMaxHorizontalSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMaxHorizontalSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetWristJet::__cordl_internal_get__baseMaxHorizontalSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseMaxHorizontalSpeed;
}
constexpr void GlobalNamespace::SIGadgetWristJet::__cordl_internal_set__baseMaxHorizontalSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseMaxHorizontalSpeed = value;
}
inline bool GlobalNamespace::SIGadgetWristJet::get_CanRecharge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"get_CanRecharge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::HandleStopInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"HandleStopInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetWristJet::UpdateThrottleIndicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"UpdateThrottleIndicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::_ApplyClampedThrust()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"_ApplyClampedThrust", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::OnEntityStateChanged(int64_t  oldState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"OnEntityStateChanged", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void GlobalNamespace::SIGadgetWristJet::SetStateAuthority(::GlobalNamespace::SIGadgetWristJet_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetWristJet_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetWristJet::SetState(::GlobalNamespace::SIGadgetWristJet_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetWristJet_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetWristJet::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetWristJet::Disrupt(float_t  disruptTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disruptTime);
}
inline void GlobalNamespace::SIGadgetWristJet::OnEntityInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetWristJet::get_UsesEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"get_UsesEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetWristJet::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWristJet::UpdateRecharge(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {"UpdateRecharge", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetWristJet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWristJet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetWristJet* GlobalNamespace::SIGadgetWristJet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetWristJet*>());
}
/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr  GlobalNamespace::SIGadgetWristJet::operator ::GlobalNamespace::I_SIDisruptable*() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* GlobalNamespace::SIGadgetWristJet::i___GlobalNamespace__I_SIDisruptable() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IEnergyGadget"
constexpr  GlobalNamespace::SIGadgetWristJet::operator ::GlobalNamespace::IEnergyGadget*() noexcept {
return static_cast<::GlobalNamespace::IEnergyGadget*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEnergyGadget"
constexpr ::GlobalNamespace::IEnergyGadget* GlobalNamespace::SIGadgetWristJet::i___GlobalNamespace__IEnergyGadget() noexcept {
return static_cast<::GlobalNamespace::IEnergyGadget*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetWristJet::SIGadgetWristJet()   {
}
