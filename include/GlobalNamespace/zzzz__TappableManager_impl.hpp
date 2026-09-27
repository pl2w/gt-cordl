#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableManager.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "GlobalNamespace/zzzz__TappableManager_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TappableManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)()>(&::GlobalNamespace::TappableManager::Awake)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x595fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RegisterInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(::GlobalNamespace::Tappable*)>(&::GlobalNamespace::TappableManager::RegisterInstance)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x595fe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.UnregisterInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(::GlobalNamespace::Tappable*)>(&::GlobalNamespace::TappableManager::UnregisterInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x596003c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Tappable*)>(&::GlobalNamespace::TappableManager::Register)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x595f694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Tappable*)>(&::GlobalNamespace::TappableManager::Unregister)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x595f7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.DebugTestTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)()>(&::GlobalNamespace::TappableManager::DebugTestTap)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5960124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"DebugTestTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.SendOnTapRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(int32_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::TappableManager::SendOnTapRPC)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59602b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnTapRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RPC_SendOnTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, int32_t, float_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::TappableManager::RPC_SendOnTap)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x59604cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnTap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.SendOnTapShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(int32_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableManager::SendOnTapShared)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5960334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnTapShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.SendOnGrabRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::TappableManager::SendOnGrabRPC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5960708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnGrabRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RPC_SendOnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, int32_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::TappableManager::RPC_SendOnGrab)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x59608d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnGrab", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.SendOnGrabShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableManager::SendOnGrabShared)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5960778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnGrabShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.SendOnReleaseRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::TappableManager::SendOnReleaseRPC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5960afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnReleaseRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RPC_SendOnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, int32_t, ::Fusion::RpcInfo)>(&::GlobalNamespace::TappableManager::RPC_SendOnRelease)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5960cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnRelease", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.SendOnReleaseShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)(int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TappableManager::SendOnReleaseShared)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5960b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnReleaseShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TappableManager::*)()>(&::GlobalNamespace::TappableManager::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5960ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RPC_SendOnTap@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::TappableManager::RPC_SendOnTap@Invoker)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5961054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnTap@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RPC_SendOnGrab@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::TappableManager::RPC_SendOnGrab@Invoker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5961130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnGrab@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TappableManager.RPC_SendOnRelease@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::TappableManager::RPC_SendOnRelease@Invoker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59611fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnRelease@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>*& GlobalNamespace::TappableManager::__cordl_internal_get_tappables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tappables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>* const& GlobalNamespace::TappableManager::__cordl_internal_get_tappables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tappables;
}
constexpr void GlobalNamespace::TappableManager::__cordl_internal_set_tappables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Tappable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tappables = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::TappableManager::__cordl_internal_get_idSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idSet;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::TappableManager::__cordl_internal_get_idSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idSet;
}
constexpr void GlobalNamespace::TappableManager::__cordl_internal_set_idSet(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idSet = value;
}
inline void GlobalNamespace::TappableManager::setStaticF_gManager(::UnityW<::GlobalNamespace::TappableManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::TappableManager>, "gManager", ::GlobalNamespace::TappableManager*>(std::forward<::UnityW<::GlobalNamespace::TappableManager>>(value));
}
inline ::UnityW<::GlobalNamespace::TappableManager> GlobalNamespace::TappableManager::getStaticF_gManager()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::TappableManager>, "gManager", ::GlobalNamespace::TappableManager*>();
}
inline void GlobalNamespace::TappableManager::setStaticF_gRegistry(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>*, "gRegistry", ::GlobalNamespace::TappableManager*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>* GlobalNamespace::TappableManager::getStaticF_gRegistry()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::Tappable>>*, "gRegistry", ::GlobalNamespace::TappableManager*>();
}
inline void GlobalNamespace::TappableManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableManager::RegisterInstance(::GlobalNamespace::Tappable*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RegisterInstance", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::TappableManager::UnregisterInstance(::GlobalNamespace::Tappable*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"UnregisterInstance", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::TappableManager::Register(::GlobalNamespace::Tappable*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::TappableManager::Unregister(::GlobalNamespace::Tappable*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::Tappable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::TappableManager::DebugTestTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"DebugTestTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableManager::SendOnTapRPC(int32_t  key, float_t  tapStrength, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnTapRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, tapStrength, info);
}
inline void GlobalNamespace::TappableManager::RPC_SendOnTap(::Fusion::NetworkRunner*  runner, int32_t  key, float_t  tapStrength, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnTap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, key, tapStrength, info);
}
inline void GlobalNamespace::TappableManager::SendOnTapShared(int32_t  key, float_t  tapStrength, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnTapShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, tapStrength, info);
}
inline void GlobalNamespace::TappableManager::SendOnGrabRPC(int32_t  key, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnGrabRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, info);
}
inline void GlobalNamespace::TappableManager::RPC_SendOnGrab(::Fusion::NetworkRunner*  runner, int32_t  key, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnGrab", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, key, info);
}
inline void GlobalNamespace::TappableManager::SendOnGrabShared(int32_t  key, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnGrabShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, info);
}
inline void GlobalNamespace::TappableManager::SendOnReleaseRPC(int32_t  key, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnReleaseRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, info);
}
inline void GlobalNamespace::TappableManager::RPC_SendOnRelease(::Fusion::NetworkRunner*  runner, int32_t  key, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnRelease", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, key, info);
}
inline void GlobalNamespace::TappableManager::SendOnReleaseShared(int32_t  key, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"SendOnReleaseShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, info);
}
inline void GlobalNamespace::TappableManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TappableManager::RPC_SendOnTap@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnTap@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline void GlobalNamespace::TappableManager::RPC_SendOnGrab@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnGrab@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline void GlobalNamespace::TappableManager::RPC_SendOnRelease@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TappableManager*>(),
                        {"RPC_SendOnRelease@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline ::GlobalNamespace::TappableManager* GlobalNamespace::TappableManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TappableManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TappableManager::TappableManager()   {
}
