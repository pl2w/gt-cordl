#pragma once
// IWYU pragma private; include "Photon/Voice/LoadBalancingTransport.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__LoadBalancingTransport_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Voice/zzzz__Codec_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__IVoiceTransport_def.hpp"
#include "Photon/Voice/zzzz__LoadBalancingTransport_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "Photon/Voice/zzzz__PhotonTransportProtocol_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.get_VoiceClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceClient* (::Photon::Voice::LoadBalancingTransport::*)()>(&::Photon::Voice::LoadBalancingTransport::get_VoiceClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa756fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"get_VoiceClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::LoadBalancingTransport::LogError)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa756fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::LoadBalancingTransport::LogWarning)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa757004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.LogInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::LoadBalancingTransport::LogInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa75703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.LogDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Photon::Voice::LoadBalancingTransport::LogDebug)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa757074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.photonChannelForCodec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LoadBalancingTransport::*)(::Photon::Voice::Codec)>(&::Photon::Voice::LoadBalancingTransport::photonChannelForCodec)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa7570ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"photonChannelForCodec", {}, {::i2c::type_of<::Photon::Voice::Codec>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.IsChannelJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LoadBalancingTransport::*)(int32_t)>(&::Photon::Voice::LoadBalancingTransport::IsChannelJoined)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa75717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"IsChannelJoined", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::Photon::Voice::ILogger*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Voice::LoadBalancingTransport::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa75718c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)()>(&::Photon::Voice::LoadBalancingTransport::Service)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa757424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"Service", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.ChangeAudioGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::LoadBalancingTransport::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Photon::Voice::LoadBalancingTransport::ChangeAudioGroups)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa757448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                    {::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.get_GlobalAudioGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LoadBalancingTransport::*)()>(&::Photon::Voice::LoadBalancingTransport::get_GlobalAudioGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa757468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"get_GlobalAudioGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.set_GlobalAudioGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(uint8_t)>(&::Photon::Voice::LoadBalancingTransport::set_GlobalAudioGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa757498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"set_GlobalAudioGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.get_GlobalInterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::LoadBalancingTransport::*)()>(&::Photon::Voice::LoadBalancingTransport::get_GlobalInterestGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa757480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"get_GlobalInterestGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.set_GlobalInterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(uint8_t)>(&::Photon::Voice::LoadBalancingTransport::set_GlobalInterestGroup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa75749c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"set_GlobalInterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.SendVoicesInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*, int32_t, int32_t)>(&::Photon::Voice::LoadBalancingTransport::SendVoicesInfo)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0xa75759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"SendVoicesInfo", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.SendVoiceRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::Photon::Voice::LocalVoice*, int32_t, int32_t)>(&::Photon::Voice::LoadBalancingTransport::SendVoiceRemove)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa75850c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"SendVoiceRemove", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.SendFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags, uint8_t, uint8_t, int32_t, int32_t, bool, ::Photon::Voice::LocalVoice*)>(&::Photon::Voice::LoadBalancingTransport::SendFrame)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa758950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                    {::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.ChannelIdStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::LoadBalancingTransport::*)(int32_t)>(&::Photon::Voice::LoadBalancingTransport::ChannelIdStr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa758d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"ChannelIdStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.PlayerIdStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::LoadBalancingTransport::*)(int32_t)>(&::Photon::Voice::LoadBalancingTransport::PlayerIdStr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa758d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"PlayerIdStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.onEventActionVoiceClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Voice::LoadBalancingTransport::onEventActionVoiceClient)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa758d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                    {::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.onStateChangeVoiceClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&::Photon::Voice::LoadBalancingTransport::onStateChangeVoiceClient)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa7592cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"onStateChangeVoiceClient", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport::*)()>(&::Photon::Voice::LoadBalancingTransport::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7593d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::LoadBalancingTransport::__cordl_internal_get_voiceClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::LoadBalancingTransport::__cordl_internal_get_voiceClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr void Photon::Voice::LoadBalancingTransport::__cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceClient = value;
}
constexpr ::Photon::Voice::PhotonTransportProtocol*& Photon::Voice::LoadBalancingTransport::__cordl_internal_get_protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___protocol;
}
constexpr ::Photon::Voice::PhotonTransportProtocol* const& Photon::Voice::LoadBalancingTransport::__cordl_internal_get_protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___protocol;
}
constexpr void Photon::Voice::LoadBalancingTransport::__cordl_internal_set_protocol(::Photon::Voice::PhotonTransportProtocol*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___protocol = value;
}
inline ::Photon::Voice::VoiceClient* Photon::Voice::LoadBalancingTransport::get_VoiceClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"get_VoiceClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceClient*>(this, ___internal_method);
}
inline void Photon::Voice::LoadBalancingTransport::LogError(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::LoadBalancingTransport::LogWarning(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::LoadBalancingTransport::LogInfo(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline void Photon::Voice::LoadBalancingTransport::LogDebug(::StringW  fmt, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fmt, args);
}
inline uint8_t Photon::Voice::LoadBalancingTransport::photonChannelForCodec(::Photon::Voice::Codec  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"photonChannelForCodec", {}, {::i2c::type_of<::Photon::Voice::Codec>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, c);
}
inline bool Photon::Voice::LoadBalancingTransport::IsChannelJoined(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"IsChannelJoined", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, channelId);
}
inline void Photon::Voice::LoadBalancingTransport::_ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger, connectionProtocol);
}
inline void Photon::Voice::LoadBalancingTransport::Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::LoadBalancingTransport::ChangeAudioGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupsToRemove, groupsToAdd);
}
inline uint8_t Photon::Voice::LoadBalancingTransport::get_GlobalAudioGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"get_GlobalAudioGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::LoadBalancingTransport::set_GlobalAudioGroup(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"set_GlobalAudioGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Voice::LoadBalancingTransport::get_GlobalInterestGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"get_GlobalInterestGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::LoadBalancingTransport::set_GlobalInterestGroup(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"set_GlobalInterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::LoadBalancingTransport::SendVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voices, int32_t  channelId, int32_t  targetPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"SendVoicesInfo", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voices, channelId, targetPlayerId);
}
inline void Photon::Voice::LoadBalancingTransport::SendVoiceRemove(::Photon::Voice::LocalVoice*  voice, int32_t  channelId, int32_t  targetPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"SendVoiceRemove", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voice, channelId, targetPlayerId);
}
inline void Photon::Voice::LoadBalancingTransport::SendFrame(::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags, uint8_t  evNumber, uint8_t  voiceId, int32_t  channelId, int32_t  targetPlayerId, bool  reliable, ::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, flags, evNumber, voiceId, channelId, targetPlayerId, reliable, localVoice);
}
inline ::StringW Photon::Voice::LoadBalancingTransport::ChannelIdStr(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"ChannelIdStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, channelId);
}
inline ::StringW Photon::Voice::LoadBalancingTransport::PlayerIdStr(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"PlayerIdStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerId);
}
inline void Photon::Voice::LoadBalancingTransport::onEventActionVoiceClient(::ExitGames::Client::Photon::EventData*  ev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void Photon::Voice::LoadBalancingTransport::onStateChangeVoiceClient(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"onStateChangeVoiceClient", {}, {::i2c::type_of<::Photon::Realtime::ClientState>(), ::i2c::type_of<::Photon::Realtime::ClientState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromState, state);
}
inline void Photon::Voice::LoadBalancingTransport::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LoadBalancingTransport* Photon::Voice::LoadBalancingTransport::New_ctor(::Photon::Voice::ILogger*  logger, ::ExitGames::Client::Photon::ConnectionProtocol  connectionProtocol)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LoadBalancingTransport*>(logger, connectionProtocol));
}
/// @brief Convert operator to "::Photon::Voice::IVoiceTransport"
constexpr  Photon::Voice::LoadBalancingTransport::operator ::Photon::Voice::IVoiceTransport*() noexcept {
return static_cast<::Photon::Voice::IVoiceTransport*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IVoiceTransport"
constexpr ::Photon::Voice::IVoiceTransport* Photon::Voice::LoadBalancingTransport::i___Photon__Voice__IVoiceTransport() noexcept {
return static_cast<::Photon::Voice::IVoiceTransport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::ILogger"
constexpr  Photon::Voice::LoadBalancingTransport::operator ::Photon::Voice::ILogger*() noexcept {
return static_cast<::Photon::Voice::ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::ILogger"
constexpr ::Photon::Voice::ILogger* Photon::Voice::LoadBalancingTransport::i___Photon__Voice__ILogger() noexcept {
return static_cast<::Photon::Voice::ILogger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::LoadBalancingTransport::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::LoadBalancingTransport::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::LoadBalancingTransport::LoadBalancingTransport()   {
}
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingTransport___c::*)()>(&::Photon::Voice::LoadBalancingTransport___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa759450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LoadBalancingTransport___c._SendVoicesInfo_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Codec (::Photon::Voice::LoadBalancingTransport___c::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::LoadBalancingTransport___c::_SendVoicesInfo_b__20_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa759458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport___c*>(),
                        {"<SendVoicesInfo>b__20_0", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::LoadBalancingTransport___c::setStaticF___9(::Photon::Voice::LoadBalancingTransport___c*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::LoadBalancingTransport___c*, "<>9", ::Photon::Voice::LoadBalancingTransport___c*>(std::forward<::Photon::Voice::LoadBalancingTransport___c*>(value));
}
inline ::Photon::Voice::LoadBalancingTransport___c* Photon::Voice::LoadBalancingTransport___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Voice::LoadBalancingTransport___c*, "<>9", ::Photon::Voice::LoadBalancingTransport___c*>();
}
inline void Photon::Voice::LoadBalancingTransport___c::setStaticF___9__20_0(::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>*, "<>9__20_0", ::Photon::Voice::LoadBalancingTransport___c*>(std::forward<::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>*>(value));
}
inline ::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>* Photon::Voice::LoadBalancingTransport___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Voice::LocalVoice*,::Photon::Voice::Codec>*, "<>9__20_0", ::Photon::Voice::LoadBalancingTransport___c*>();
}
inline void Photon::Voice::LoadBalancingTransport___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Codec Photon::Voice::LoadBalancingTransport___c::_SendVoicesInfo_b__20_0(::Photon::Voice::LocalVoice*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingTransport___c*>(),
                        {"<SendVoicesInfo>b__20_0", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Codec>(this, ___internal_method, v);
}
inline ::Photon::Voice::LoadBalancingTransport___c* Photon::Voice::LoadBalancingTransport___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LoadBalancingTransport___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::LoadBalancingTransport___c::LoadBalancingTransport___c()   {
}
