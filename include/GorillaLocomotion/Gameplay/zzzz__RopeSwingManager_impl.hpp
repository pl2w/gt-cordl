#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/RopeSwingManager.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__RopeSwingManager_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwing_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager> (*)()>(&::GorillaLocomotion::Gameplay::RopeSwingManager::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cf0038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::Gameplay::RopeSwingManager*)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cf0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)()>(&::GorillaLocomotion::Gameplay::RopeSwingManager::Awake)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5cf00d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.RegisterInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::RegisterInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cf02dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.UnregisterInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::UnregisterInstance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cf033c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::Register)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ce9b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::Unregister)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ce9c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.SendSetVelocity_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, bool)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::SendSetVelocity_RPC)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ceb9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"SendSetVelocity_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.TryGetRope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::RopeSwingManager::*)(int32_t, ::by_ref<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::TryGetRope)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ceca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"TryGetRope", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::SetVelocity)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5cf0508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"SetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.RPC_SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, int32_t, int32_t, ::UnityEngine::Vector3, bool, ::Fusion::RpcInfo)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::RPC_SetVelocity)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5cf0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"RPC_SetVelocity", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.SetVelocityShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)(int32_t, int32_t, ::UnityEngine::Vector3, bool, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::SetVelocityShared)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5cf0398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"SetVelocityShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::RopeSwingManager::*)()>(&::GorillaLocomotion::Gameplay::RopeSwingManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cf0898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::RopeSwingManager.RPC_SetVelocity@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GorillaLocomotion::Gameplay::RopeSwingManager::RPC_SetVelocity@Invoker)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cf0920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"RPC_SetVelocity@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*& GorillaLocomotion::Gameplay::RopeSwingManager::__cordl_internal_get_ropes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* const& GorillaLocomotion::Gameplay::RopeSwingManager::__cordl_internal_get_ropes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ropes;
}
constexpr void GorillaLocomotion::Gameplay::RopeSwingManager::__cordl_internal_set_ropes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ropes = value;
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::setStaticF__instance_k__BackingField(::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>, "<instance>k__BackingField", ::GorillaLocomotion::Gameplay::RopeSwingManager*>(std::forward<::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>>(value));
}
inline ::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager> GorillaLocomotion::Gameplay::RopeSwingManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>, "<instance>k__BackingField", ::GorillaLocomotion::Gameplay::RopeSwingManager*>();
}
inline ::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager> GorillaLocomotion::Gameplay::RopeSwingManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::set_instance(::GorillaLocomotion::Gameplay::RopeSwingManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::RegisterInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::UnregisterInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::Register(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::Unregister(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::SendSetVelocity_RPC(int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"SendSetVelocity_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ropeId, boneIndex, velocity, wholeRope);
}
inline bool GorillaLocomotion::Gameplay::RopeSwingManager::TryGetRope(int32_t  ropeId, ::by_ref<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"TryGetRope", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ropeId, result);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::SetVelocity(int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"SetVelocity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ropeId, boneIndex, velocity, wholeRope, info);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::RPC_SetVelocity(::Fusion::NetworkRunner*  runner, int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"RPC_SetVelocity", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, ropeId, boneIndex, velocity, wholeRope, info);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::SetVelocityShared(int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"SetVelocityShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ropeId, boneIndex, velocity, wholeRope, info);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::RopeSwingManager::RPC_SetVelocity@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::RopeSwingManager*>(),
                        {"RPC_SetVelocity@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline ::GorillaLocomotion::Gameplay::RopeSwingManager* GorillaLocomotion::Gameplay::RopeSwingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::RopeSwingManager*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::RopeSwingManager::RopeSwingManager()   {
}
