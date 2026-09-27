#pragma once
// IWYU pragma private; include "Photon/Voice/PhotonTransportProtocol.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__PhotonTransportProtocol_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "Photon/Voice/zzzz__PhotonTransportProtocol_EventParam_def.hpp"
#include "Photon/Voice/zzzz__PhotonTransportProtocol_EventSubcode_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PhotonTransportProtocol::*)(::Photon::Voice::VoiceClient*, ::Photon::Voice::ILogger*)>(&::Photon::Voice::PhotonTransportProtocol::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa7573e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.buildVoicesInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Photon::Voice::PhotonTransportProtocol::*)(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*, bool)>(&::Photon::Voice::PhotonTransportProtocol::buildVoicesInfo)> {
  constexpr static std::size_t size = 0x9f8;
  constexpr static std::size_t addrs = 0xa757b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"buildVoicesInfo", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.buildVoiceRemoveMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Photon::Voice::PhotonTransportProtocol::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::PhotonTransportProtocol::buildVoiceRemoveMessage)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa7586a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"buildVoiceRemoveMessage", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.buildFrameMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Photon::Voice::PhotonTransportProtocol::*)(uint8_t, uint8_t, ::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags)>(&::Photon::Voice::PhotonTransportProtocol::buildFrameMessage)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa758b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"buildFrameMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.onVoiceEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PhotonTransportProtocol::*)(::System::Object*, int32_t, int32_t, bool)>(&::Photon::Voice::PhotonTransportProtocol::onVoiceEvent)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xa758e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"onVoiceEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.onVoiceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PhotonTransportProtocol::*)(int32_t, int32_t, ::System::Object*)>(&::Photon::Voice::PhotonTransportProtocol::onVoiceInfo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa759ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"onVoiceInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.onVoiceRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::PhotonTransportProtocol::*)(int32_t, int32_t, ::System::Object*)>(&::Photon::Voice::PhotonTransportProtocol::onVoiceRemove)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa759cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"onVoiceRemove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::PhotonTransportProtocol.createVoiceInfoFromEventPayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceInfo (::Photon::Voice::PhotonTransportProtocol::*)(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*)>(&::Photon::Voice::PhotonTransportProtocol::createVoiceInfoFromEventPayload)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xa759d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"createVoiceInfoFromEventPayload", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::PhotonTransportProtocol::__cordl_internal_get_voiceClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::PhotonTransportProtocol::__cordl_internal_get_voiceClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr void Photon::Voice::PhotonTransportProtocol::__cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceClient = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::PhotonTransportProtocol::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::PhotonTransportProtocol::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::PhotonTransportProtocol::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
inline void Photon::Voice::PhotonTransportProtocol::_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceClient, logger);
}
inline ::ArrayW<::System::Object*> Photon::Voice::PhotonTransportProtocol::buildVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voicesToSend, bool  logInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"buildVoicesInfo", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, voicesToSend, logInfo);
}
inline ::ArrayW<::System::Object*> Photon::Voice::PhotonTransportProtocol::buildVoiceRemoveMessage(::Photon::Voice::LocalVoice*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"buildVoiceRemoveMessage", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, v);
}
inline ::ArrayW<::System::Object*> Photon::Voice::PhotonTransportProtocol::buildFrameMessage(uint8_t  voiceId, uint8_t  evNumber, ::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"buildFrameMessage", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, voiceId, evNumber, data, flags);
}
inline void Photon::Voice::PhotonTransportProtocol::onVoiceEvent(::System::Object*  content0, int32_t  channelId, int32_t  playerId, bool  isLocalPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"onVoiceEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content0, channelId, playerId, isLocalPlayer);
}
inline void Photon::Voice::PhotonTransportProtocol::onVoiceInfo(int32_t  channelId, int32_t  playerId, ::System::Object*  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"onVoiceInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, payload);
}
inline void Photon::Voice::PhotonTransportProtocol::onVoiceRemove(int32_t  channelId, int32_t  playerId, ::System::Object*  payload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"onVoiceRemove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, payload);
}
inline ::Photon::Voice::VoiceInfo Photon::Voice::PhotonTransportProtocol::createVoiceInfoFromEventPayload(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  h)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PhotonTransportProtocol*>(),
                        {"createVoiceInfoFromEventPayload", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceInfo>(this, ___internal_method, h);
}
inline ::Photon::Voice::PhotonTransportProtocol* Photon::Voice::PhotonTransportProtocol::New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::PhotonTransportProtocol*>(voiceClient, logger));
}
// Ctor Parameters []
constexpr ::Photon::Voice::PhotonTransportProtocol::PhotonTransportProtocol()   {
}
