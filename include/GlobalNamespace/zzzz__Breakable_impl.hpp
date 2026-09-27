#pragma once
// IWYU pragma private; include "GlobalNamespace/Breakable.hpp"
#include "GlobalNamespace/zzzz__UnityLayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__Breakable_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignalInfo_def.hpp"
#include "GlobalNamespace/zzzz__PhotonSignal_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Breakable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57b0fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.BreakRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(int32_t, ::GlobalNamespace::PhotonSignalInfo)>(&::GlobalNamespace::Breakable::BreakRPC)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x57b10cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"BreakRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::Setup)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x57b11d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::Breakable::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::Breakable::OnCollisionStay)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b1534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::Breakable::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b1548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::Breakable::OnTriggerStay)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b155c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::OnEnable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57b1570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::OnDisable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57b15a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.Break
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::Break)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57b15f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Break", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57b1608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.ShowRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(bool)>(&::GlobalNamespace::Breakable::ShowRenderers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57b1618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                    {::i2c::class_of<::GlobalNamespace::Breakable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(bool)>(&::GlobalNamespace::Breakable::OnReset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x57b16ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                    {::i2c::class_of<::GlobalNamespace::Breakable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(bool)>(&::GlobalNamespace::Breakable::OnSpawn)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x57b17d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                    {::i2c::class_of<::GlobalNamespace::Breakable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.OnBreak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)(bool, bool)>(&::GlobalNamespace::Breakable::OnBreak)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x57b18d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                    {::i2c::class_of<::GlobalNamespace::Breakable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable.UpdatePhysMasks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::UpdatePhysMasks)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57b13ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"UpdatePhysMasks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Breakable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Breakable::*)()>(&::GlobalNamespace::Breakable::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x57b1b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::Breakable::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::Breakable::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::Breakable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::Breakable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Breakable::__cordl_internal_get_rendererRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Breakable::__cordl_internal_get_rendererRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererRoot;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_rendererRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rendererRoot = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::Breakable::__cordl_internal_get__renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::Breakable::__cordl_internal_get__renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderers;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderers = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::Breakable::__cordl_internal_get__breakEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::Breakable::__cordl_internal_get__breakEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakEffect;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__breakEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breakEffect = value;
}
constexpr ::GlobalNamespace::UnityLayerMask& GlobalNamespace::Breakable::__cordl_internal_get__physicsMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsMask;
}
constexpr ::GlobalNamespace::UnityLayerMask const& GlobalNamespace::Breakable::__cordl_internal_get__physicsMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsMask;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__physicsMask(::GlobalNamespace::UnityLayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physicsMask = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*& GlobalNamespace::Breakable::__cordl_internal_get_onSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpawn;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>* const& GlobalNamespace::Breakable::__cordl_internal_get_onSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpawn;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_onSpawn(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSpawn = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*& GlobalNamespace::Breakable::__cordl_internal_get_onBreak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBreak;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>* const& GlobalNamespace::Breakable::__cordl_internal_get_onBreak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBreak;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_onBreak(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBreak = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*& GlobalNamespace::Breakable::__cordl_internal_get_onReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReset;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>* const& GlobalNamespace::Breakable::__cordl_internal_get_onReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReset;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_onReset(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::Breakable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReset = value;
}
constexpr float_t& GlobalNamespace::Breakable::__cordl_internal_get_canBreakDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canBreakDelay;
}
constexpr float_t const& GlobalNamespace::Breakable::__cordl_internal_get_canBreakDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canBreakDelay;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_canBreakDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canBreakDelay = value;
}
constexpr ::GlobalNamespace::PhotonSignal_1<int32_t>*& GlobalNamespace::Breakable::__cordl_internal_get__breakSignal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakSignal;
}
constexpr ::GlobalNamespace::PhotonSignal_1<int32_t>* const& GlobalNamespace::Breakable::__cordl_internal_get__breakSignal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breakSignal;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__breakSignal(::GlobalNamespace::PhotonSignal_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breakSignal = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::Breakable::__cordl_internal_get_m_spamChecker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spamChecker;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::Breakable::__cordl_internal_get_m_spamChecker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_spamChecker;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_m_spamChecker(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_spamChecker = value;
}
constexpr bool& GlobalNamespace::Breakable::__cordl_internal_get__broken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broken;
}
constexpr bool const& GlobalNamespace::Breakable::__cordl_internal_get__broken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broken;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set__broken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broken = value;
}
constexpr bool& GlobalNamespace::Breakable::__cordl_internal_get_m_useGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useGravity;
}
constexpr bool const& GlobalNamespace::Breakable::__cordl_internal_get_m_useGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_useGravity;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_m_useGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_useGravity = value;
}
constexpr float_t& GlobalNamespace::Breakable::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::Breakable::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr float_t& GlobalNamespace::Breakable::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr float_t const& GlobalNamespace::Breakable::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::Breakable::__cordl_internal_set_endTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
inline void GlobalNamespace::Breakable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::BreakRPC(int32_t  owner, ::GlobalNamespace::PhotonSignalInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"BreakRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonSignalInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, info);
}
inline void GlobalNamespace::Breakable::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::OnCollisionEnter(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::Breakable::OnCollisionStay(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::Breakable::OnTriggerEnter(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::Breakable::OnTriggerStay(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::Breakable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::Break()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Break", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::ShowRenderers(bool  visible)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Breakable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::Breakable::OnReset(bool  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Breakable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::Breakable::OnSpawn(bool  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Breakable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::Breakable::OnBreak(bool  callback, bool  signal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Breakable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, signal);
}
inline void GlobalNamespace::Breakable::UpdatePhysMasks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {"UpdatePhysMasks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Breakable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Breakable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Breakable* GlobalNamespace::Breakable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Breakable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Breakable::Breakable()   {
}
