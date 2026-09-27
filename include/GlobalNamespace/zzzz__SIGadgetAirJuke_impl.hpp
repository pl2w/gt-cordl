#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirJuke.hpp"
#include "GlobalNamespace/zzzz__ResettableUseCounter_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirJuke_EState_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirJuke_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__GameSnappable_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirJuke_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.get__HandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::get__HandIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58d4eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"get__HandIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::Awake)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x58d4fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.OnRecharged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)(bool)>(&::GlobalNamespace::SIGadgetAirJuke::OnRecharged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"OnRecharged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::OnDestroy)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x58d5370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._HandleStartInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_HandleStartInteraction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58d5608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_HandleStartInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._HandleStopInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_HandleStopInteraction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58d5634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_HandleStopInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::FixedUpdate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x58d56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)(float_t)>(&::GlobalNamespace::SIGadgetAirJuke::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58d5fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._OnUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_OnUpdateShared)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x58d5dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_OnUpdateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._UpdateFxRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_UpdateFxRotation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58d60f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_UpdateFxRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)(::GlobalNamespace::SIGadgetAirJuke_EState)>(&::GlobalNamespace::SIGadgetAirJuke::_SetStateAuthority)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58d5678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirJuke_EState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._TrySetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetAirJuke::*)(::GlobalNamespace::SIGadgetAirJuke_EState)>(&::GlobalNamespace::SIGadgetAirJuke::_TrySetStateShared)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58d6074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_TrySetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirJuke_EState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_CheckInput)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58d58a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._DoDash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_DoDash)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x58d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_DoDash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._CalculateDashSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SIGadgetAirJuke::*)(float_t)>(&::GlobalNamespace::SIGadgetAirJuke::_CalculateDashSpeed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58d61f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_CalculateDashSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._PlayHaptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)(float_t)>(&::GlobalNamespace::SIGadgetAirJuke::_PlayHaptic)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58d58d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_PlayHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._IsHandGroundedSteerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaLocomotion::GTPlayer*)>(&::GlobalNamespace::SIGadgetAirJuke::_IsHandGroundedSteerable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58d5a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_IsHandGroundedSteerable", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._IsRechargeBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GorillaSurfaceOverride*)>(&::GlobalNamespace::SIGadgetAirJuke::_IsRechargeBlocked)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58d62fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_IsRechargeBlocked", {}, {::i2c::type_of<::GlobalNamespace::GorillaSurfaceOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetAirJuke::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58d6390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetAirJuke._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetAirJuke::*)()>(&::GlobalNamespace::SIGadgetAirJuke::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58d63dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameSnappable>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_snappable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_snappable;
}
constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_snappable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_snappable;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_snappable = value;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buttonActivatable = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_inputActivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputActivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_inputActivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputActivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_inputActivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputActivateThreshold = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_inputDeactivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputDeactivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_inputDeactivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputDeactivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_inputDeactivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputDeactivateThreshold = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_handMinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handMinSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_handMinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handMinSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_handMinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_handMinSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_handMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handMaxSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_handMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_handMaxSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_handMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_handMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_minDashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDashSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_minDashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_minDashSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_minDashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_minDashSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__maxDashSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDashSpeed;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__maxDashSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDashSpeed;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__maxDashSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDashSpeed = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxDashSpeedDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxDashSpeedDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedDefault;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_maxDashSpeedDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxDashSpeedDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxDashSpeedUpgraded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedUpgraded;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxDashSpeedUpgraded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxDashSpeedUpgraded;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_maxDashSpeedUpgraded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxDashSpeedUpgraded = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_speedMappingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedMappingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_speedMappingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_speedMappingCurve;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_speedMappingCurve = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_slipperySurfacesTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_slipperySurfacesTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_slipperySurfacesTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_slipperySurfacesTime;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_slipperySurfacesTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_slipperySurfacesTime = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxInfluenceAngleDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleDefault;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxInfluenceAngleDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleDefault;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_maxInfluenceAngleDefault(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxInfluenceAngleDefault = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxInfluenceAngleUpgrade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleUpgrade;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxInfluenceAngleUpgrade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxInfluenceAngleUpgrade;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_maxInfluenceAngleUpgrade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxInfluenceAngleUpgrade = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxRegularUses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxRegularUses;
}
constexpr int32_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxRegularUses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxRegularUses;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_maxRegularUses(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxRegularUses = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxSuperchargeUses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxSuperchargeUses;
}
constexpr int32_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_maxSuperchargeUses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxSuperchargeUses;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_maxSuperchargeUses(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxSuperchargeUses = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_particleSystem;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_particleSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_singleJukeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleJukeAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_singleJukeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleJukeAudio;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_singleJukeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleJukeAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_reusableJukeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableJukeAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_reusableJukeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableJukeAudio;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_reusableJukeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reusableJukeAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_finalJukeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalJukeAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_finalJukeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalJukeAudio;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_finalJukeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalJukeAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_rechargeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_rechargeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rechargeAudio;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_rechargeAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rechargeAudio = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxGObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxGObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxGObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxGObj;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__fxGObj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fxGObj = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxXform;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__fxXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fxXform = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxMain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxMain;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxMain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxMain;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__fxMain(::GlobalNamespace::ParticleSystem_MainModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fxMain = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxEmission;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__fxEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fxEmission;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__fxEmission(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fxEmission = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__isActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__isActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActivated;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__isActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActivated = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__wasActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__wasActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasActivated;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__wasActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasActivated = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__dashStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashStartTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__dashStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashStartTime;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__dashStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dashStartTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__airReleaseVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__airReleaseVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____airReleaseVector;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__airReleaseVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____airReleaseVector = value;
}
constexpr bool& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__isTagged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTagged;
}
constexpr bool const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__isTagged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTagged;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__isTagged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTagged = value;
}
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__state(::GlobalNamespace::SIGadgetAirJuke_EState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::GlobalNamespace::ResettableUseCounter& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__groundedUseCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundedUseCounter;
}
constexpr ::GlobalNamespace::ResettableUseCounter const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__groundedUseCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundedUseCounter;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__groundedUseCounter(::GlobalNamespace::ResettableUseCounter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundedUseCounter = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__playingFxUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingFxUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__playingFxUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingFxUntilTimestamp;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__playingFxUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playingFxUntilTimestamp = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__dashStartFxPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashStartFxPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get__dashStartFxPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dashStartFxPos;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set__dashStartFxPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dashStartFxPos = value;
}
constexpr float_t& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_fxMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fxMaxDistance;
}
constexpr float_t const& GlobalNamespace::SIGadgetAirJuke::__cordl_internal_get_m_fxMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fxMaxDistance;
}
constexpr void GlobalNamespace::SIGadgetAirJuke::__cordl_internal_set_m_fxMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fxMaxDistance = value;
}
inline int32_t GlobalNamespace::SIGadgetAirJuke::get__HandIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"get__HandIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::OnRecharged(bool  recharged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"OnRecharged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recharged);
}
inline void GlobalNamespace::SIGadgetAirJuke::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::_HandleStartInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_HandleStartInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::_HandleStopInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_HandleStopInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetAirJuke::_OnUpdateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_OnUpdateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::_UpdateFxRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_UpdateFxRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::_SetStateAuthority(::GlobalNamespace::SIGadgetAirJuke_EState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirJuke_EState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::SIGadgetAirJuke::_TrySetStateShared(::GlobalNamespace::SIGadgetAirJuke_EState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_TrySetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetAirJuke_EState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newState);
}
inline bool GlobalNamespace::SIGadgetAirJuke::_CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetAirJuke::_DoDash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_DoDash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SIGadgetAirJuke::_CalculateDashSpeed(float_t  currentYankSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_CalculateDashSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, currentYankSpeed);
}
inline void GlobalNamespace::SIGadgetAirJuke::_PlayHaptic(float_t  strengthMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_PlayHaptic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strengthMultiplier);
}
inline bool GlobalNamespace::SIGadgetAirJuke::_IsHandGroundedSteerable(::GorillaLocomotion::GTPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_IsHandGroundedSteerable", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player);
}
inline bool GlobalNamespace::SIGadgetAirJuke::_IsRechargeBlocked(::GlobalNamespace::GorillaSurfaceOverride*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {"_IsRechargeBlocked", {}, {::i2c::type_of<::GlobalNamespace::GorillaSurfaceOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, surface);
}
inline void GlobalNamespace::SIGadgetAirJuke::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetAirJuke::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetAirJuke*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetAirJuke* GlobalNamespace::SIGadgetAirJuke::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetAirJuke*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetAirJuke::SIGadgetAirJuke()   {
}
