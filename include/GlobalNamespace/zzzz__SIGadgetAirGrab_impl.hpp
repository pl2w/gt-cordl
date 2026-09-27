#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirGrab.hpp"
#include "GlobalNamespace/zzzz__ResettableUseCounter_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirGrab_EState_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirGrab_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirGrab_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.get__HandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::get__HandIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58d6bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"get__HandIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::Awake)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x58d6d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.OnRecharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(bool)>(&::GlobalNamespace::SIGadgetAirGrab::OnRecharge)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d7088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"OnRecharge", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::OnDestroy)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x58d70a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.ClearGravityOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::ClearGravityOverride)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58d7340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"ClearGravityOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::OnDisable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58d73e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._HandleStartInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::_HandleStartInteraction)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58d74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_HandleStartInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._HandleStopInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::_HandleStopInteraction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58d75b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_HandleStopInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::FixedUpdate)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x58d7688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.UpdateUsageIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::UpdateUsageIndicator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58d7c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"UpdateUsageIndicator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.GravityOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::SIGadgetAirGrab::GravityOverrideFunction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d82e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(float_t)>(&::GlobalNamespace::SIGadgetAirGrab::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58d82ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::GlobalNamespace::SIGadgetAirGrab::_CanChangeState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58d84d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(::GlobalNamespace::SIGadgetAirGrab_EState)>(&::GlobalNamespace::SIGadgetAirGrab::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58d7650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirGrab_EState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(::GlobalNamespace::SIGadgetAirGrab_EState)>(&::GlobalNamespace::SIGadgetAirGrab::_SetStateShared)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58d83f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_SetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirGrab_EState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::_CheckInput)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58d7c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._UpdateAirGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::_UpdateAirGrab)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58d805c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_UpdateAirGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._DoDash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::_DoDash)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x58d7e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_DoDash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._CalculateDashSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SIGadgetAirGrab::*)(float_t)>(&::GlobalNamespace::SIGadgetAirGrab::_CalculateDashSpeed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58d8568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_CalculateDashSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._PlayHaptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(float_t)>(&::GlobalNamespace::SIGadgetAirGrab::_PlayHaptic)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58d7cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_PlayHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(int32_t)>(&::GlobalNamespace::SIGadgetAirGrab::_PlayAudio)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58d84dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_PlayAudio", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetAirGrab::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58d85ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirGrab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirGrab::*)()>(&::GlobalNamespace::SIGadgetAirGrab::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58d8660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameSnappable>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_snappable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_snappable;
}
constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_snappable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_snappable;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_snappable = value;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buttonActivatable = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_inputActivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputActivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_inputActivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputActivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_inputActivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputActivateThreshold = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_inputDeactivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputDeactivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_inputDeactivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputDeactivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_inputDeactivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputDeactivateThreshold = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_audioSource;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_audioSource = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_onGrabSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrabSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_onGrabSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGrabSound;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_onGrabSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGrabSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_rechargeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_rechargeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeSound;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_rechargeSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeSound = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clips;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_clips = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_clipVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clipVolumes;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_clipVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_clipVolumes;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_clipVolumes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_clipVolumes = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_yankMinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMinSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_yankMinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMinSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_yankMinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yankMinSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_yankMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMaxSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_yankMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yankMaxSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_yankMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yankMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_minDashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDashSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_minDashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDashSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_minDashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_minDashSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__maxDashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDashSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__maxDashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDashSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__maxDashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDashSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxDashSpeedDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxDashSpeedDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedDefault;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxDashSpeedDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxDashSpeedDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxDashSpeedUpgraded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedUpgraded;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxDashSpeedUpgraded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedUpgraded;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxDashSpeedUpgraded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxDashSpeedUpgraded = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__maxHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHoldTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__maxHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHoldTime;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__maxHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxHoldTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxHoldTimeDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxHoldTimeDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxHoldTimeDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxHoldTimeDefault;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxHoldTimeDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxHoldTimeDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxHoldTimeUpgraded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxHoldTimeUpgraded;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxHoldTimeUpgraded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxHoldTimeUpgraded;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxHoldTimeUpgraded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxHoldTimeUpgraded = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_speedMappingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedMappingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_speedMappingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedMappingCurve;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_speedMappingCurve = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_slipperySurfacesTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_slipperySurfacesTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_slipperySurfacesTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_slipperySurfacesTime;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_slipperySurfacesTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_slipperySurfacesTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxInfluenceAngleDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxInfluenceAngleDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleDefault;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxInfluenceAngleDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxInfluenceAngleDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxInfluenceAngleUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleUpgrade;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxInfluenceAngleUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleUpgrade;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxInfluenceAngleUpgrade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxInfluenceAngleUpgrade = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_cooldownDurationDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_cooldownDurationDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationDefault;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_cooldownDurationDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cooldownDurationDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_cooldownDurationUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationUpgrade;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_cooldownDurationUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cooldownDurationUpgrade;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_cooldownDurationUpgrade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cooldownDurationUpgrade = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxSuperchargeUses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxSuperchargeUses;
}
constexpr int32_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_maxSuperchargeUses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxSuperchargeUses;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_maxSuperchargeUses(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxSuperchargeUses = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_airGrabXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_airGrabXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_airGrabXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_airGrabXform;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_airGrabXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_airGrabXform = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_canActivateIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_canActivateIndicator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_m_canActivateIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_canActivateIndicator;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_m_canActivateIndicator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_canActivateIndicator = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__isActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__isActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivated;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__isActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActivated = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__wasActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__wasActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasActivated;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__wasActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasActivated = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__airGrabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airGrabTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__airGrabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airGrabTime;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__airGrabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airGrabTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__airReleaseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__airReleaseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__airReleaseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airReleaseSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__airReleaseVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__airReleaseVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseVector;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__airReleaseVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airReleaseVector = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__attachedVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__attachedVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedVRRig;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__attachedVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedVRRig = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__lastAttachedPlayerActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAttachedPlayerActorNr;
}
constexpr int32_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__lastAttachedPlayerActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAttachedPlayerActorNr;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__lastAttachedPlayerActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastAttachedPlayerActorNr = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__attachedPlayerActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedPlayerActorNr;
}
constexpr int32_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__attachedPlayerActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedPlayerActorNr;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__attachedPlayerActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedPlayerActorNr = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__attachedNetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedNetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__attachedNetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedNetPlayer;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__attachedNetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedNetPlayer = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__isTagged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTagged;
}
constexpr bool const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__isTagged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTagged;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__isTagged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTagged = value;
}
constexpr ::ArrayW<::System::Object*>& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__launchYoyoRPCArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchYoyoRPCArgs;
}
constexpr ::ArrayW<::System::Object*> const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__launchYoyoRPCArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchYoyoRPCArgs;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__launchYoyoRPCArgs(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchYoyoRPCArgs = value;
}
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__state(::GlobalNamespace::SIGadgetAirGrab_EState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::GlobalNamespace::ResettableUseCounter& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__groundedUseCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundedUseCounter;
}
constexpr ::GlobalNamespace::ResettableUseCounter const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__groundedUseCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundedUseCounter;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__groundedUseCounter(::GlobalNamespace::ResettableUseCounter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundedUseCounter = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_hasGravityOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasGravityOverride;
}
constexpr bool const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_hasGravityOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasGravityOverride;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_hasGravityOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasGravityOverride = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__grabStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabStartTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__grabStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabStartTime;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__grabStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabStartTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__grabXformInitialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabXformInitialScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get__grabXformInitialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabXformInitialScale;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set__grabXformInitialScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabXformInitialScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_lastRequestedPlayerPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedPlayerPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetAirGrab::__cordl_internal_get_lastRequestedPlayerPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedPlayerPos;
}
constexpr void GlobalNamespace::SIGadgetAirGrab::__cordl_internal_set_lastRequestedPlayerPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRequestedPlayerPos = value;
}
inline int32_t GlobalNamespace::SIGadgetAirGrab::get__HandIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"get__HandIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::OnRecharge(bool  recharged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"OnRecharge", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recharged);
}
inline void GlobalNamespace::SIGadgetAirGrab::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::ClearGravityOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"ClearGravityOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::_HandleStartInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_HandleStartInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::_HandleStopInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_HandleStopInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::UpdateUsageIndicator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"UpdateUsageIndicator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"GravityOverrideFunction", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIGadgetAirGrab::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::SIGadgetAirGrab::_CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newStateIndex);
}
inline void GlobalNamespace::SIGadgetAirGrab::SetStateAuthority(::GlobalNamespace::SIGadgetAirGrab_EState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirGrab_EState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetAirGrab::_SetStateShared(::GlobalNamespace::SIGadgetAirGrab_EState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_SetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirGrab_EState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::SIGadgetAirGrab::_CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::_UpdateAirGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_UpdateAirGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirGrab::_DoDash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_DoDash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SIGadgetAirGrab::_CalculateDashSpeed(float_t  currentYankSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_CalculateDashSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentYankSpeed);
}
inline void GlobalNamespace::SIGadgetAirGrab::_PlayHaptic(float_t  strengthMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_PlayHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strengthMultiplier);
}
inline void GlobalNamespace::SIGadgetAirGrab::_PlayAudio(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {"_PlayAudio", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::SIGadgetAirGrab::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetAirGrab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirGrab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetAirGrab* GlobalNamespace::SIGadgetAirGrab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetAirGrab*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetAirGrab::SIGadgetAirGrab()   {
}
