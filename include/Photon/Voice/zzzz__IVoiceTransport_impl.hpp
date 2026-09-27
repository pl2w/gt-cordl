#pragma once
// IWYU pragma private; include "Photon/Voice/IVoiceTransport.hpp"
#include "Photon/Voice/zzzz__IVoiceTransport_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::IVoiceTransport.IsChannelJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::IVoiceTransport::*)(int32_t)>(&::Photon::Voice::IVoiceTransport::IsChannelJoined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IVoiceTransport*>(),
                    {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IVoiceTransport.SendVoicesInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IVoiceTransport::*)(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*, int32_t, int32_t)>(&::Photon::Voice::IVoiceTransport::SendVoicesInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IVoiceTransport*>(),
                    {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IVoiceTransport.SendVoiceRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IVoiceTransport::*)(::Photon::Voice::LocalVoice*, int32_t, int32_t)>(&::Photon::Voice::IVoiceTransport::SendVoiceRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IVoiceTransport*>(),
                    {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IVoiceTransport.SendFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::IVoiceTransport::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags, uint8_t, uint8_t, int32_t, int32_t, bool, ::Photon::Voice::LocalVoice*)>(&::Photon::Voice::IVoiceTransport::SendFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IVoiceTransport*>(),
                    {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IVoiceTransport.ChannelIdStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IVoiceTransport::*)(int32_t)>(&::Photon::Voice::IVoiceTransport::ChannelIdStr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IVoiceTransport*>(),
                    {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::IVoiceTransport.PlayerIdStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::IVoiceTransport::*)(int32_t)>(&::Photon::Voice::IVoiceTransport::PlayerIdStr)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::IVoiceTransport*>(),
                    {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 5}
                ));
    return ___internal_method;
  }
};
inline bool Photon::Voice::IVoiceTransport::IsChannelJoined(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, channelId);
}
inline void Photon::Voice::IVoiceTransport::SendVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voices, int32_t  channelId, int32_t  targetPlayerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voices, channelId, targetPlayerId);
}
inline void Photon::Voice::IVoiceTransport::SendVoiceRemove(::Photon::Voice::LocalVoice*  voice, int32_t  channelId, int32_t  targetPlayerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voice, channelId, targetPlayerId);
}
inline void Photon::Voice::IVoiceTransport::SendFrame(::System::ArraySegment_1<uint8_t>  data, ::Photon::Voice::FrameFlags  flags, uint8_t  evNumber, uint8_t  voiceId, int32_t  channelId, int32_t  targetPlayerId, bool  reliable, ::Photon::Voice::LocalVoice*  localVoice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, flags, evNumber, voiceId, channelId, targetPlayerId, reliable, localVoice);
}
inline ::StringW Photon::Voice::IVoiceTransport::ChannelIdStr(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, channelId);
}
inline ::StringW Photon::Voice::IVoiceTransport::PlayerIdStr(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IVoiceTransport*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerId);
}
