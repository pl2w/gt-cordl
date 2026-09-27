#pragma once
// IWYU pragma private; include "GlobalNamespace/GuardianRPCs.hpp"
#include "GlobalNamespace/zzzz__RPCNetworkBase_impl.hpp"
#include "GlobalNamespace/zzzz__GuardianRPCs_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGuardianManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaWrappedSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IWrappedSerializable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GuardianRPCs.SetClassTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuardianRPCs::*)(::GlobalNamespace::IWrappedSerializable*, ::GlobalNamespace::GorillaWrappedSerializer*)>(&::GlobalNamespace::GuardianRPCs::SetClassTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ac5708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                    {::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuardianRPCs.GuardianRequestEject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuardianRPCs::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GuardianRPCs::GuardianRequestEject)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ac5818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"GuardianRequestEject", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuardianRPCs.GuardianLaunchPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuardianRPCs::*)(::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GuardianRPCs::GuardianLaunchPlayer)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5ac590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"GuardianLaunchPlayer", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuardianRPCs.ShowSlapEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuardianRPCs::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GuardianRPCs::ShowSlapEffects)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5ac5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"ShowSlapEffects", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuardianRPCs.ShowSlamEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuardianRPCs::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GuardianRPCs::ShowSlamEffect)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5ac5fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"ShowSlamEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GuardianRPCs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GuardianRPCs::*)()>(&::GlobalNamespace::GuardianRPCs::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ac6388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& GlobalNamespace::GuardianRPCs::__cordl_internal_get_serializer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& GlobalNamespace::GuardianRPCs::__cordl_internal_get_serializer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializer;
}
constexpr void GlobalNamespace::GuardianRPCs::__cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializer = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGuardianManager>& GlobalNamespace::GuardianRPCs::__cordl_internal_get_guardianManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guardianManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaGuardianManager> const& GlobalNamespace::GuardianRPCs::__cordl_internal_get_guardianManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guardianManager;
}
constexpr void GlobalNamespace::GuardianRPCs::__cordl_internal_set_guardianManager(::UnityW<::GlobalNamespace::GorillaGuardianManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guardianManager = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GuardianRPCs::__cordl_internal_get_launchCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchCallLimit;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GuardianRPCs::__cordl_internal_get_launchCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchCallLimit;
}
constexpr void GlobalNamespace::GuardianRPCs::__cordl_internal_set_launchCallLimit(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchCallLimit = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GuardianRPCs::__cordl_internal_get_slapFXCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapFXCallLimit;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GuardianRPCs::__cordl_internal_get_slapFXCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slapFXCallLimit;
}
constexpr void GlobalNamespace::GuardianRPCs::__cordl_internal_set_slapFXCallLimit(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slapFXCallLimit = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GuardianRPCs::__cordl_internal_get_slamFXCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamFXCallLimit;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GuardianRPCs::__cordl_internal_get_slamFXCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slamFXCallLimit;
}
constexpr void GlobalNamespace::GuardianRPCs::__cordl_internal_set_slamFXCallLimit(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slamFXCallLimit = value;
}
inline void GlobalNamespace::GuardianRPCs::SetClassTarget(::GlobalNamespace::IWrappedSerializable*  target, ::GlobalNamespace::GorillaWrappedSerializer*  netHandler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, netHandler);
}
inline void GlobalNamespace::GuardianRPCs::GuardianRequestEject(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"GuardianRequestEject", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::GuardianRPCs::GuardianLaunchPlayer(::UnityEngine::Vector3  velocity, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"GuardianLaunchPlayer", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, info);
}
inline void GlobalNamespace::GuardianRPCs::ShowSlapEffects(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"ShowSlapEffects", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, direction, info);
}
inline void GlobalNamespace::GuardianRPCs::ShowSlamEffect(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  direction, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {"ShowSlamEffect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location, direction, info);
}
inline void GlobalNamespace::GuardianRPCs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GuardianRPCs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GuardianRPCs* GlobalNamespace::GuardianRPCs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GuardianRPCs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GuardianRPCs::GuardianRPCs()   {
}
