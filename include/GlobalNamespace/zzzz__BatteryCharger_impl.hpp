#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryCharger.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerCrank_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryCharger_BatteryChargerEvent_VDirection_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BatteryCharger_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerCrank_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_CrankSyncState_def.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_def.hpp"
#include "GlobalNamespace/zzzz__BatteryCharger_BatteryChargerEvent_VDirection_def.hpp"
#include "GlobalNamespace/zzzz__BatteryCharger_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.get_CurrentEventPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::get_CurrentEventPhase)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bfbb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"get_CurrentEventPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.RegisterCrank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BatteryCharger::*)(::GlobalNamespace::BatteryChargerCrank*)>(&::GlobalNamespace::BatteryCharger::RegisterCrank)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bfbbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"RegisterCrank", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerCrank*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.get_LocalActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::get_LocalActorNr)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bfbce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bfbd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bfc014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnStateSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::OnStateSceneLoaded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bfc228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnStateSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(::GlobalNamespace::BatteryChargerState*)>(&::GlobalNamespace::BatteryCharger::Bind)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5bfbe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"Bind", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.Unbind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::Unbind)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5bfc0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"Unbind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::LateUpdate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5bfc944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.UpdateRemoteCrankVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(::GlobalNamespace::BatteryChargerCrank*, ::GlobalNamespace::BatteryChargerState_CrankSyncState, int32_t)>(&::GlobalNamespace::BatteryCharger::UpdateRemoteCrankVisual)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5bfcc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"UpdateRemoteCrankVisual", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerCrank*>(), ::i2c::type_of<::GlobalNamespace::BatteryChargerState_CrankSyncState>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.IsCrankHeldLocally
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatteryCharger::*)(int32_t)>(&::GlobalNamespace::BatteryCharger::IsCrankHeldLocally)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bfd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"IsCrankHeldLocally", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.SetEventPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(int32_t)>(&::GlobalNamespace::BatteryCharger::SetEventPhase)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bfd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"SetEventPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.SetChargePerCrankDegree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(float_t)>(&::GlobalNamespace::BatteryCharger::SetChargePerCrankDegree)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bfd290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"SetChargePerCrankDegree", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnCrankGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BatteryCharger::*)(int32_t, bool)>(&::GlobalNamespace::BatteryCharger::OnCrankGrabbed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bfd2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnCrankReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(int32_t, float_t)>(&::GlobalNamespace::BatteryCharger::OnCrankReleased)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bfd4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnCrankInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(int32_t, float_t)>(&::GlobalNamespace::BatteryCharger::OnCrankInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bfd72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnChargeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::OnChargeChanged)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bfd874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnChargeChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnFullyCharged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::OnFullyCharged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bfd958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnFullyCharged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.OnEventPhaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)(int32_t)>(&::GlobalNamespace::BatteryCharger::OnEventPhaseChanged)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5bfc5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnEventPhaseChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger.ApplyChargeVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::ApplyChargeVisuals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bfc47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"ApplyChargeVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger::*)()>(&::GlobalNamespace::BatteryCharger::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bfd9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::BatteryCharger::__cordl_internal_get_stateRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::BatteryCharger::__cordl_internal_get_stateRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateRef;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_stateRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateRef = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargeFillTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeFillTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargeFillTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeFillTransform;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_chargeFillTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeFillTransform = value;
}
constexpr float_t& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargeFullRollAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeFullRollAngle;
}
constexpr float_t const& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargeFullRollAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeFullRollAngle;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_chargeFullRollAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeFullRollAngle = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargeFillRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeFillRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargeFillRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeFillRenderer;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_chargeFillRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeFillRenderer = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BatteryCharger::__cordl_internal_get_emptyColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BatteryCharger::__cordl_internal_get_emptyColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyColor;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_emptyColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BatteryCharger::__cordl_internal_get_fullColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BatteryCharger::__cordl_internal_get_fullColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullColor;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_fullColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullColor = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargingLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargingLoopSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_chargingLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargingLoopSound;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_chargingLoopSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargingLoopSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BatteryCharger::__cordl_internal_get_fullyChargedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyChargedSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_fullyChargedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyChargedSound;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_fullyChargedSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullyChargedSound = value;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>& GlobalNamespace::BatteryCharger::__cordl_internal_get_eventPhases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventPhases;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_eventPhases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventPhases;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_eventPhases(::ArrayW<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventPhases = value;
}
constexpr ::UnityW<::GlobalNamespace::BatteryChargerState>& GlobalNamespace::BatteryCharger::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::UnityW<::GlobalNamespace::BatteryChargerState> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_state(::UnityW<::GlobalNamespace::BatteryChargerState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>>& GlobalNamespace::BatteryCharger::__cordl_internal_get_cranks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cranks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_cranks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cranks;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_cranks(::ArrayW<::UnityW<::GlobalNamespace::BatteryChargerCrank>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cranks = value;
}
constexpr int32_t& GlobalNamespace::BatteryCharger::__cordl_internal_get_crankCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankCount;
}
constexpr int32_t const& GlobalNamespace::BatteryCharger::__cordl_internal_get_crankCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankCount;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_crankCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>& GlobalNamespace::BatteryCharger::__cordl_internal_get_actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr ::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*> const& GlobalNamespace::BatteryCharger::__cordl_internal_get_actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_actions(::ArrayW<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actions = value;
}
constexpr float_t& GlobalNamespace::BatteryCharger::__cordl_internal_get_previousCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCharge;
}
constexpr float_t const& GlobalNamespace::BatteryCharger::__cordl_internal_get_previousCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousCharge;
}
constexpr void GlobalNamespace::BatteryCharger::__cordl_internal_set_previousCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousCharge = value;
}
inline int32_t GlobalNamespace::BatteryCharger::get_CurrentEventPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"get_CurrentEventPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BatteryCharger::RegisterCrank(::GlobalNamespace::BatteryChargerCrank*  crank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"RegisterCrank", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerCrank*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, crank);
}
inline int32_t GlobalNamespace::BatteryCharger::get_LocalActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"get_LocalActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::OnStateSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnStateSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::Bind(::GlobalNamespace::BatteryChargerState*  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"Bind", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::BatteryCharger::Unbind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"Unbind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::UpdateRemoteCrankVisual(::GlobalNamespace::BatteryChargerCrank*  crank, ::GlobalNamespace::BatteryChargerState_CrankSyncState  syncState, int32_t  localActor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"UpdateRemoteCrankVisual", {}, {::i2c::type_of<::GlobalNamespace::BatteryChargerCrank*>(), ::i2c::type_of<::GlobalNamespace::BatteryChargerState_CrankSyncState>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crank, syncState, localActor);
}
inline bool GlobalNamespace::BatteryCharger::IsCrankHeldLocally(int32_t  crankIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"IsCrankHeldLocally", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crankIndex);
}
inline void GlobalNamespace::BatteryCharger::SetEventPhase(int32_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"SetEventPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GlobalNamespace::BatteryCharger::SetChargePerCrankDegree(float_t  chargeRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"SetChargePerCrankDegree", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chargeRate);
}
inline bool GlobalNamespace::BatteryCharger::OnCrankGrabbed(int32_t  crankIndex, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnCrankGrabbed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, crankIndex, isLeftHand);
}
inline void GlobalNamespace::BatteryCharger::OnCrankReleased(int32_t  crankIndex, float_t  finalAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnCrankReleased", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, finalAngle);
}
inline void GlobalNamespace::BatteryCharger::OnCrankInput(int32_t  crankIndex, float_t  degrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnCrankInput", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crankIndex, degrees);
}
inline void GlobalNamespace::BatteryCharger::OnChargeChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnChargeChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::OnFullyCharged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnFullyCharged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::OnEventPhaseChanged(int32_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"OnEventPhaseChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GlobalNamespace::BatteryCharger::ApplyChargeVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {"ApplyChargeVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BatteryCharger* GlobalNamespace::BatteryCharger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BatteryCharger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryCharger::BatteryCharger()   {
}
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger_BatteryChargerEvent.get_Direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection (::GlobalNamespace::BatteryCharger_BatteryChargerEvent::*)()>(&::GlobalNamespace::BatteryCharger_BatteryChargerEvent::get_Direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfda80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {"get_Direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger_BatteryChargerEvent.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BatteryCharger_BatteryChargerEvent::*)()>(&::GlobalNamespace::BatteryCharger_BatteryChargerEvent::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfda88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger_BatteryChargerEvent.get_Action
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::GlobalNamespace::BatteryCharger_BatteryChargerEvent::*)()>(&::GlobalNamespace::BatteryCharger_BatteryChargerEvent::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfda90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {"get_Action", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger_BatteryChargerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger_BatteryChargerEvent::*)()>(&::GlobalNamespace::BatteryCharger_BatteryChargerEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfda98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection& GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection const& GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_set_direction(::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr float_t& GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr float_t const& GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_set_value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void GlobalNamespace::BatteryCharger_BatteryChargerEvent::__cordl_internal_set_action(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline ::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection GlobalNamespace::BatteryCharger_BatteryChargerEvent::get_Direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {"get_Direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BatteryChargerEvent_BatteryCharger_VDirection>(this, ___internal_method);
}
inline float_t GlobalNamespace::BatteryCharger_BatteryChargerEvent::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* GlobalNamespace::BatteryCharger_BatteryChargerEvent::get_Action()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {"get_Action", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void GlobalNamespace::BatteryCharger_BatteryChargerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BatteryCharger_BatteryChargerEvent* GlobalNamespace::BatteryCharger_BatteryChargerEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BatteryCharger_BatteryChargerEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryCharger_BatteryChargerEvent::BatteryCharger_BatteryChargerEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::BatteryCharger_EventPhaseObjects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BatteryCharger_EventPhaseObjects::*)()>(&::GlobalNamespace::BatteryCharger_EventPhaseObjects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bfda78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BatteryCharger_EventPhaseObjects::__cordl_internal_get_friendlyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyName;
}
constexpr ::StringW const& GlobalNamespace::BatteryCharger_EventPhaseObjects::__cordl_internal_get_friendlyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyName;
}
constexpr void GlobalNamespace::BatteryCharger_EventPhaseObjects::__cordl_internal_set_friendlyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendlyName = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BatteryCharger_EventPhaseObjects::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BatteryCharger_EventPhaseObjects::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr void GlobalNamespace::BatteryCharger_EventPhaseObjects::__cordl_internal_set_objects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
inline void GlobalNamespace::BatteryCharger_EventPhaseObjects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BatteryCharger_EventPhaseObjects* GlobalNamespace::BatteryCharger_EventPhaseObjects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BatteryCharger_EventPhaseObjects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryCharger_EventPhaseObjects::BatteryCharger_EventPhaseObjects()   {
}
