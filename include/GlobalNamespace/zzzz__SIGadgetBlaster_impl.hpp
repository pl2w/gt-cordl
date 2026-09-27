#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlaster.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterState_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlaster_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterType_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlaster_RPCCalls_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.get_LocalEquippedOrActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::get_LocalEquippedOrActivated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57f9958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"get_LocalEquippedOrActivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(bool)>(&::GlobalNamespace::SIGadgetBlaster::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f9998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::OnEnable)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x57f99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57f9ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::Tick)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x57f9d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetBlaster::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57f9fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetBlaster::OnUpdateRemote)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x57fa074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.SetStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(::GlobalNamespace::SIGadgetBlasterState)>(&::GlobalNamespace::SIGadgetBlaster::SetStateAuthority)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57fa224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(::GlobalNamespace::SIGadgetBlasterState)>(&::GlobalNamespace::SIGadgetBlaster::SetStateShared)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x57fa158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"SetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetBlaster::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57fa268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::GlobalNamespace::SIGadgetBlaster::CanChangeState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57fa25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::CheckInput)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57fa314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.NextFireId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::NextFireId)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57fa358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"NextFireId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.ProcessClientToClientRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(::Photon::Pun::PhotonMessageInfo, int32_t, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetBlaster::ProcessClientToClientRPC)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x57fa36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.StartGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::StartGrabbing)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57fa660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"StartGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.StopGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::StopGrabbing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fa69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"StopGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.DespawnProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(::GlobalNamespace::SIGadgetBlasterProjectile*)>(&::GlobalNamespace::SIGadgetBlaster::DespawnProjectile)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57fa6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"DespawnProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.InstantiateProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SIGadgetBlaster::*)(::GlobalNamespace::SIGadgetBlasterProjectile*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::GlobalNamespace::SIGadgetBlaster::InstantiateProjectile)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x57fa784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"InstantiateProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.FireProjectileHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)(float_t, float_t)>(&::GlobalNamespace::SIGadgetBlaster::FireProjectileHaptics)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57fae5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"FireProjectileHaptics", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster.CurrentFireRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::CurrentFireRate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57faf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"CurrentFireRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetBlaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetBlaster::*)()>(&::GlobalNamespace::SIGadgetBlaster::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x57fafe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SIGadgetBlasterType*& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_blasterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blasterType;
}
constexpr ::GlobalNamespace::SIGadgetBlasterType* const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_blasterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blasterType;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_blasterType(::GlobalNamespace::SIGadgetBlasterType*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blasterType = value;
}
constexpr ::GlobalNamespace::SIGadgetBlasterState& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SIGadgetBlasterState const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_currentState(::GlobalNamespace::SIGadgetBlasterState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonActivatable = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_inputActivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputActivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_inputActivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputActivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_inputActivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputActivateThreshold = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_inputDeactivateThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDeactivateThreshold;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_inputDeactivateThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDeactivateThreshold;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_inputDeactivateThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputDeactivateThreshold = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_maxProjectileCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxProjectileCount;
}
constexpr int32_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_maxProjectileCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxProjectileCount;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_maxProjectileCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxProjectileCount = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_maxLagDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLagDistance;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_maxLagDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLagDistance;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_maxLagDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLagDistance = value;
}
constexpr bool& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_wasActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasActivated;
}
constexpr bool const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_wasActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasActivated;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_wasActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasActivated = value;
}
constexpr float_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_lastFired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFired;
}
constexpr float_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_lastFired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFired;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_lastFired(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFired = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectileCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileCount;
}
constexpr int32_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectileCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileCount;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_projectileCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileCount = value;
}
constexpr int32_t& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectileId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileId;
}
constexpr int32_t const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectileId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileId;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_projectileId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_activeProjectiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeProjectiles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>* const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_activeProjectiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeProjectiles;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_activeProjectiles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeProjectiles = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectilesToDespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilesToDespawn;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>* const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectilesToDespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilesToDespawn;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_projectilesToDespawn(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilesToDespawn = value;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>*& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectilesToDespawnTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilesToDespawnTimes;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_projectilesToDespawnTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilesToDespawnTimes;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_projectilesToDespawnTimes(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilesToDespawnTimes = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_firingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_firingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingPosition;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_firingPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingPosition = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_firingSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_firingSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSource;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_firingSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_blasterSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blasterSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_blasterSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blasterSource;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_blasterSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blasterSource = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_environmentLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SIGadgetBlaster::__cordl_internal_get_environmentLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentLayerMask;
}
constexpr void GlobalNamespace::SIGadgetBlaster::__cordl_internal_set_environmentLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___environmentLayerMask = value;
}
inline void GlobalNamespace::SIGadgetBlaster::setStaticF_blasterProjectilePools(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*, "blasterProjectilePools", ::GlobalNamespace::SIGadgetBlaster*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* GlobalNamespace::SIGadgetBlaster::getStaticF_blasterProjectilePools()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*, "blasterProjectilePools", ::GlobalNamespace::SIGadgetBlaster*>();
}
inline bool GlobalNamespace::SIGadgetBlaster::get_LocalEquippedOrActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"get_LocalEquippedOrActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SIGadgetBlaster::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIGadgetBlaster::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetBlaster::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetBlaster::SetStateAuthority(::GlobalNamespace::SIGadgetBlasterState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"SetStateAuthority", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetBlaster::SetStateShared(::GlobalNamespace::SIGadgetBlasterState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"SetStateShared", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetBlaster::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline bool GlobalNamespace::SIGadgetBlaster::CanChangeState(int64_t  newStateIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"CanChangeState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newStateIndex);
}
inline bool GlobalNamespace::SIGadgetBlaster::CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SIGadgetBlaster::NextFireId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"NextFireId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::ProcessClientToClientRPC(::Photon::Pun::PhotonMessageInfo  info, int32_t  rpcID, ::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rpcID, data);
}
inline void GlobalNamespace::SIGadgetBlaster::StartGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"StartGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::StopGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"StopGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::DespawnProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"DespawnProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SIGadgetBlaster::InstantiateProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectilePrefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  thisFireId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"InstantiateProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, projectilePrefab, position, rotation, thisFireId);
}
inline void GlobalNamespace::SIGadgetBlaster::FireProjectileHaptics(float_t  strength, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"FireProjectileHaptics", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strength, duration);
}
inline float_t GlobalNamespace::SIGadgetBlaster::CurrentFireRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {"CurrentFireRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetBlaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetBlaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetBlaster* GlobalNamespace::SIGadgetBlaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetBlaster*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::SIGadgetBlaster::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::SIGadgetBlaster::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetBlaster::SIGadgetBlaster()   {
}
