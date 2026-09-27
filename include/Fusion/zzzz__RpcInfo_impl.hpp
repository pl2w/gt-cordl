#pragma once
// IWYU pragma private; include "Fusion/RpcInfo.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__RpcChannel_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__RpcChannel_def.hpp"
#include "Fusion/zzzz__RpcHostMode_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
//  Writing Method size for method: ::Fusion::RpcInfo.FromLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcInfo (*)(::Fusion::NetworkRunner*, ::Fusion::RpcChannel, ::Fusion::RpcHostMode)>(&::Fusion::RpcInfo::FromLocal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fd0c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcInfo>(),
                        {"FromLocal", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::RpcChannel>(), ::i2c::type_of<::Fusion::RpcHostMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcInfo.FromMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcInfo (*)(::Fusion::NetworkRunner*, ::Fusion::SimulationMessage*, ::Fusion::RpcHostMode)>(&::Fusion::RpcInfo::FromMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fd0ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcInfo>(),
                        {"FromMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::RpcHostMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::RpcInfo::*)()>(&::Fusion::RpcInfo::ToString)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5fd0da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::RpcInfo>(),
                    {::i2c::class_of<::Fusion::RpcInfo>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::Fusion::RpcInfo Fusion::RpcInfo::FromLocal(::Fusion::NetworkRunner*  runner, ::Fusion::RpcChannel  channel, ::Fusion::RpcHostMode  hostMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcInfo>(),
                        {"FromLocal", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::RpcChannel>(), ::i2c::type_of<::Fusion::RpcHostMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcInfo>(nullptr, ___internal_method, runner, channel, hostMode);
}
inline ::Fusion::RpcInfo Fusion::RpcInfo::FromMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message, ::Fusion::RpcHostMode  hostMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcInfo>(),
                        {"FromMessage", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::SimulationMessage*>(), ::i2c::type_of<::Fusion::RpcHostMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcInfo>(nullptr, ___internal_method, runner, message, hostMode);
}
inline ::StringW Fusion::RpcInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::RpcInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Source", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Channel", ty: "::Fusion::RpcChannel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsInvokeLocal", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RpcInfo::RpcInfo(::Fusion::Tick  Tick, ::Fusion::PlayerRef  Source, ::Fusion::RpcChannel  Channel, bool  IsInvokeLocal) noexcept  {
this->Tick = Tick;
this->Source = Source;
this->Channel = Channel;
this->IsInvokeLocal = IsInvokeLocal;
}
// Ctor Parameters []
constexpr ::Fusion::RpcInfo::RpcInfo()   {
}
