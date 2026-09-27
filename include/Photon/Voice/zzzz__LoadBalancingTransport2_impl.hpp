#pragma once
// IWYU pragma private; include "Photon/Voice/LoadBalancingTransport2.hpp"
#include "Photon/Voice/zzzz__LoadBalancingTransport_impl.hpp"
#include "Photon/Voice/zzzz__LoadBalancingTransport2_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport2::*)(::Photon::Voice::ILogger*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Voice::LoadBalancingTransport2::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa75946c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport2.SendFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport2::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags, uint8_t, uint8_t, int32_t, int32_t, bool, ::Photon::Voice::LocalVoice*)>(&::Photon::Voice::LoadBalancingTransport2::SendFrame)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa7594a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(),
                    {::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport2.onEventActionVoiceClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport2::*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Voice::LoadBalancingTransport2::onEventActionVoiceClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa759774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(),
                    {::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport2.onVoiceFrameEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport2::*)(::System::Object*, int32_t, int32_t, int32_t)>(&::Photon::Voice::LoadBalancingTransport2::onVoiceFrameEvent)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xa7597f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(),
                        {"onVoiceFrameEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::LoadBalancingTransport2::_ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger, connectionProtocol);
}
inline void Photon::Voice::LoadBalancingTransport2::SendFrame(::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags, uint8_t  evNumber, uint8_t  voiceId, int32_t  channelId, int32_t  targetPlayerId, bool  reliable, ::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, flags, evNumber, voiceId, channelId, targetPlayerId, reliable, localVoice);
}
inline void Photon::Voice::LoadBalancingTransport2::onEventActionVoiceClient(::ExitGames::Client::Photon::EventData*  ev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void Photon::Voice::LoadBalancingTransport2::onVoiceFrameEvent(::System::Object*  content0, int32_t  channelId, int32_t  playerId, int32_t  localPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport2*>(),
                        {"onVoiceFrameEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content0, channelId, playerId, localPlayerId);
}
inline ::Photon::Voice::LoadBalancingTransport2* Photon::Voice::LoadBalancingTransport2::New_ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LoadBalancingTransport2*>(logger, connectionProtocol));
}
// Ctor Parameters []
constexpr ::Photon::Voice::LoadBalancingTransport2::LoadBalancingTransport2()   {
}
