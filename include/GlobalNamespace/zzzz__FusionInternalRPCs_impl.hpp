#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionInternalRPCs.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FusionInternalRPCs_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FusionInternalRPCs.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionInternalRPCs::*)()>(&::GlobalNamespace::FusionInternalRPCs::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56d65bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionInternalRPCs.RPC_SendPlayerSyncProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::PlayerRef, ::Fusion::PlayerRef, ::StringW, ::StringW)>(&::GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x56d66d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {"RPC_SendPlayerSyncProp", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionInternalRPCs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FusionInternalRPCs::*)()>(&::GlobalNamespace::FusionInternalRPCs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d6a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FusionInternalRPCs.RPC_SendPlayerSyncProp@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*)>(&::GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp@Invoker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x56d6a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {"RPC_SendPlayerSyncProp@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FusionInternalRPCs::setStaticF_netSys(::UnityW<::GlobalNamespace::NetworkSystemFusion>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::NetworkSystemFusion>, "netSys", ::GlobalNamespace::FusionInternalRPCs*>(std::forward<::UnityW<::GlobalNamespace::NetworkSystemFusion>>(value));
}
inline ::UnityW<::GlobalNamespace::NetworkSystemFusion> GlobalNamespace::FusionInternalRPCs::getStaticF_netSys()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::NetworkSystemFusion>, "netSys", ::GlobalNamespace::FusionInternalRPCs*>();
}
inline void GlobalNamespace::FusionInternalRPCs::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp(::Fusion::NetworkRunner*  runner, /* [RpcTarget] */ ::Fusion::PlayerRef  player, ::Fusion::PlayerRef  playerData, ::StringW  propKey, ::StringW  propValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {"RPC_SendPlayerSyncProp", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, player, playerData, propKey, propValue);
}
inline void GlobalNamespace::FusionInternalRPCs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FusionInternalRPCs::RPC_SendPlayerSyncProp@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FusionInternalRPCs*>(),
                        {"RPC_SendPlayerSyncProp@Invoker", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, message);
}
inline ::GlobalNamespace::FusionInternalRPCs* GlobalNamespace::FusionInternalRPCs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FusionInternalRPCs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FusionInternalRPCs::FusionInternalRPCs()   {
}
