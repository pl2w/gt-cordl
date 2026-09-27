#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportStationManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TeleportStationManager_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__TeleportStationManager_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TeleportStationManager> (*)()>(&::GlobalNamespace::TeleportStationManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5add194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager::*)()>(&::GlobalNamespace::TeleportStationManager::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5add1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TeleportStationManager::Initialize)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5add290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager::*)()>(&::GlobalNamespace::TeleportStationManager::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5add4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager.ThirdPersonTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::TeleportStationManager::ThirdPersonTeleport)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5adce2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"ThirdPersonTeleport", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager.FirstPersonTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::GlobalNamespace::GTZone, ::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*, ::GorillaNetworking::GorillaNetworkJoinTrigger*, int32_t)>(&::GlobalNamespace::TeleportStationManager::FirstPersonTeleport)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5adca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"FirstPersonTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager::*)()>(&::GlobalNamespace::TeleportStationManager::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5addf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::TeleportStationManager::__cordl_internal_get_thirdPersonEffectStarts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonEffectStarts;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_thirdPersonEffectStarts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonEffectStarts;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_thirdPersonEffectStarts(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thirdPersonEffectStarts = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::TeleportStationManager::__cordl_internal_get_thirdPersonEffectEnds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonEffectEnds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_thirdPersonEffectEnds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonEffectEnds;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_thirdPersonEffectEnds(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thirdPersonEffectEnds = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationManager::__cordl_internal_get_firstPersonEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_firstPersonEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonEffect;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_firstPersonEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPersonEffect = value;
}
constexpr int32_t& GlobalNamespace::TeleportStationManager::__cordl_internal_get_effectsIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsIndex;
}
constexpr int32_t const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_effectsIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsIndex;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_effectsIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsIndex = value;
}
constexpr ::GlobalNamespace::TeleportStationManager_FPTPort*& GlobalNamespace::TeleportStationManager::__cordl_internal_get_firstPersonTPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonTPort;
}
constexpr ::GlobalNamespace::TeleportStationManager_FPTPort* const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_firstPersonTPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonTPort;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_firstPersonTPort(::GlobalNamespace::TeleportStationManager_FPTPort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPersonTPort = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>*& GlobalNamespace::TeleportStationManager::__cordl_internal_get_thirdPersonTPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonTPort;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>* const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_thirdPersonTPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonTPort;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_thirdPersonTPort(::System::Collections::Generic::List_1<::GlobalNamespace::TeleportStationManager_TPTPort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thirdPersonTPort = value;
}
constexpr bool& GlobalNamespace::TeleportStationManager::__cordl_internal_get_ready()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ready;
}
constexpr bool const& GlobalNamespace::TeleportStationManager::__cordl_internal_get_ready() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ready;
}
constexpr void GlobalNamespace::TeleportStationManager::__cordl_internal_set_ready(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ready = value;
}
inline void GlobalNamespace::TeleportStationManager::setStaticF___instance(::UnityW<::GlobalNamespace::TeleportStationManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::TeleportStationManager>, "__instance", ::GlobalNamespace::TeleportStationManager*>(std::forward<::UnityW<::GlobalNamespace::TeleportStationManager>>(value));
}
inline ::UnityW<::GlobalNamespace::TeleportStationManager> GlobalNamespace::TeleportStationManager::getStaticF___instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::TeleportStationManager>, "__instance", ::GlobalNamespace::TeleportStationManager*>();
}
inline ::UnityW<::GlobalNamespace::TeleportStationManager> GlobalNamespace::TeleportStationManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TeleportStationManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TeleportStationManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStationManager::Initialize(::UnityEngine::GameObject*  fPersonEffect, ::UnityEngine::GameObject*  thirdPersonEffectStart, ::UnityEngine::GameObject*  thirdPersonEffectEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fPersonEffect, thirdPersonEffectStart, thirdPersonEffectEnd);
}
inline void GlobalNamespace::TeleportStationManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStationManager::ThirdPersonTeleport(::GlobalNamespace::VRRig*  rig, int32_t  effectTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"ThirdPersonTeleport", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, effectTime);
}
inline void GlobalNamespace::TeleportStationManager::FirstPersonTeleport(::UnityEngine::Vector3  targetPos, float_t  targetRot, ::UnityEngine::Vector3  targetSlop, ::GlobalNamespace::GTZone  teleportToZone, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  effectTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {"FirstPersonTeleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPos, targetRot, targetSlop, teleportToZone, sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger, effectTime);
}
inline void GlobalNamespace::TeleportStationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeleportStationManager* GlobalNamespace::TeleportStationManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportStationManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportStationManager::TeleportStationManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_TPTPort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager_TPTPort::*)(::GlobalNamespace::VRRig*, int32_t, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TeleportStationManager_TPTPort::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adde50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_TPTPort.get_EffectTimeRemains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TeleportStationManager_TPTPort::*)()>(&::GlobalNamespace::TeleportStationManager_TPTPort::get_EffectTimeRemains)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ade454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {"get_EffectTimeRemains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_TPTPort.get_Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TeleportStationManager_TPTPort::*)()>(&::GlobalNamespace::TeleportStationManager_TPTPort::get_Done)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5adde40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {"get_Done", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_TPTPort.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager_TPTPort::*)(float_t)>(&::GlobalNamespace::TeleportStationManager_TPTPort::Tick)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5addd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr float_t& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_effectTimeRemains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTimeRemains;
}
constexpr float_t const& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_effectTimeRemains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTimeRemains;
}
constexpr void GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_set_effectTimeRemains(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectTimeRemains = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_startEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_startEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startEffect;
}
constexpr void GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_set_startEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startEffect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_endEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_endEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endEffect;
}
constexpr void GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_set_endEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endEffect = value;
}
constexpr int32_t& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phase;
}
constexpr int32_t const& GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_get_phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phase;
}
constexpr void GlobalNamespace::TeleportStationManager_TPTPort::__cordl_internal_set_phase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___phase = value;
}
inline void GlobalNamespace::TeleportStationManager_TPTPort::_ctor(::GlobalNamespace::VRRig*  rig, int32_t  effectTime, ::UnityEngine::GameObject*  startEffect, ::UnityEngine::GameObject*  endEffect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, effectTime, startEffect, endEffect);
}
inline float_t GlobalNamespace::TeleportStationManager_TPTPort::get_EffectTimeRemains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {"get_EffectTimeRemains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::TeleportStationManager_TPTPort::get_Done()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {"get_Done", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStationManager_TPTPort::Tick(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_TPTPort*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::GlobalNamespace::TeleportStationManager_TPTPort* GlobalNamespace::TeleportStationManager_TPTPort::New_ctor(::GlobalNamespace::VRRig*  rig, int32_t  effectTime, ::UnityEngine::GameObject*  startEffect, ::UnityEngine::GameObject*  endEffect)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportStationManager_TPTPort*>(rig, effectTime, startEffect, endEffect));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportStationManager_TPTPort::TeleportStationManager_TPTPort()   {
}
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager_FPTPort::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::GlobalNamespace::GTZone, ::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*, ::GorillaNetworking::GorillaNetworkJoinTrigger*, int32_t, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TeleportStationManager_FPTPort::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5addebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort.get_Phase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TeleportStationManager_FPTPort::*)()>(&::GlobalNamespace::TeleportStationManager_FPTPort::get_Phase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ade06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"get_Phase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort.get_EffectTimeRemains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TeleportStationManager_FPTPort::*)()>(&::GlobalNamespace::TeleportStationManager_FPTPort::get_EffectTimeRemains)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ade074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"get_EffectTimeRemains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort.get_Done
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TeleportStationManager_FPTPort::*)()>(&::GlobalNamespace::TeleportStationManager_FPTPort::get_Done)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5addd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"get_Done", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager_FPTPort::*)(float_t, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TeleportStationManager_FPTPort::Tick)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x5add61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort.LowestActorNumberInFriendCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TeleportStationManager_FPTPort::*)()>(&::GlobalNamespace::TeleportStationManager_FPTPort::LowestActorNumberInFriendCollider)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ade07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"LowestActorNumberInFriendCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeleportStationManager_FPTPort.SetupFriendGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeleportStationManager_FPTPort::*)(::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*, bool)>(&::GlobalNamespace::TeleportStationManager_FPTPort::SetupFriendGroup)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5ade244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"SetupFriendGroup", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_targetPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_targetPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPos;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_targetPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPos = value;
}
constexpr float_t& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_targetRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRot;
}
constexpr float_t const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_targetRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRot;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_targetRot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_targetSlop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSlop;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_targetSlop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSlop;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_targetSlop(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSlop = value;
}
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_teleportToZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToZone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_teleportToZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportToZone;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_teleportToZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportToZone = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_sourceFriendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFriendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_sourceFriendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFriendCollider;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_sourceFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceFriendCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_destinationFriendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFriendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_destinationFriendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFriendCollider;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_destinationFriendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationFriendCollider = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_destinationJoinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationJoinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_destinationJoinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationJoinTrigger;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_destinationJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationJoinTrigger = value;
}
constexpr float_t& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_effectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTime;
}
constexpr float_t const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_effectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTime;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_effectTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectTime = value;
}
constexpr float_t& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_effectTimeRemains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTimeRemains;
}
constexpr float_t const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_effectTimeRemains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectTimeRemains;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_effectTimeRemains(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectTimeRemains = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_firstPersonEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonEffect;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_firstPersonEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonEffect;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_firstPersonEffect(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPersonEffect = value;
}
constexpr int32_t& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phase;
}
constexpr int32_t const& GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_get_phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phase;
}
constexpr void GlobalNamespace::TeleportStationManager_FPTPort::__cordl_internal_set_phase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___phase = value;
}
inline void GlobalNamespace::TeleportStationManager_FPTPort::_ctor(::UnityEngine::Vector3  targetPos, float_t  targetRot, ::UnityEngine::Vector3  targetSlop, ::GlobalNamespace::GTZone  teleportToZone, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  effectTime, ::UnityEngine::GameObject*  firstPersonEffect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPos, targetRot, targetSlop, teleportToZone, sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger, effectTime, firstPersonEffect);
}
inline int32_t GlobalNamespace::TeleportStationManager_FPTPort::get_Phase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"get_Phase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::TeleportStationManager_FPTPort::get_EffectTimeRemains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"get_EffectTimeRemains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::TeleportStationManager_FPTPort::get_Done()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"get_Done", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStationManager_FPTPort::Tick(float_t  deltaTime, ::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime, go);
}
inline int32_t GlobalNamespace::TeleportStationManager_FPTPort::LowestActorNumberInFriendCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"LowestActorNumberInFriendCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TeleportStationManager_FPTPort::SetupFriendGroup(::GlobalNamespace::GorillaFriendCollider*  source, ::GlobalNamespace::GorillaFriendCollider*  destination, bool  refreshFriendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeleportStationManager_FPTPort*>(),
                        {"SetupFriendGroup", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination, refreshFriendList);
}
inline ::GlobalNamespace::TeleportStationManager_FPTPort* GlobalNamespace::TeleportStationManager_FPTPort::New_ctor(::UnityEngine::Vector3  targetPos, float_t  targetRot, ::UnityEngine::Vector3  targetSlop, ::GlobalNamespace::GTZone  teleportToZone, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  effectTime, ::UnityEngine::GameObject*  firstPersonEffect)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeleportStationManager_FPTPort*>(targetPos, targetRot, targetSlop, teleportToZone, sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger, effectTime, firstPersonEffect));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportStationManager_FPTPort::TeleportStationManager_FPTPort()   {
}
