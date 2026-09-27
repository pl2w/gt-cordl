#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceFramedBase.hpp"
#include "Photon/Voice/zzzz__LocalVoice_impl.hpp"
#include "Photon/Voice/zzzz__LocalVoiceFramedBase_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LocalVoiceFramedBase.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::LocalVoiceFramedBase::*)()>(&::Photon::Voice::LocalVoiceFramedBase::get_FrameSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramedBase*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoiceFramedBase.set_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoiceFramedBase::*)(int32_t)>(&::Photon::Voice::LocalVoiceFramedBase::set_FrameSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramedBase*>(),
                        {"set_FrameSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::LocalVoiceFramedBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LocalVoiceFramedBase::*)(::Photon::Voice::VoiceClient*, ::Photon::Voice::IEncoder*, uint8_t, ::Photon::Voice::VoiceInfo, int32_t, int32_t)>(&::Photon::Voice::LocalVoiceFramedBase::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa753eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramedBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Voice::LocalVoiceFramedBase::__cordl_internal_get__FrameSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameSize_k__BackingField;
}
constexpr int32_t const& Photon::Voice::LocalVoiceFramedBase::__cordl_internal_get__FrameSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameSize_k__BackingField;
}
constexpr void Photon::Voice::LocalVoiceFramedBase::__cordl_internal_set__FrameSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrameSize_k__BackingField = value;
}
inline int32_t Photon::Voice::LocalVoiceFramedBase::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramedBase*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::LocalVoiceFramedBase::set_FrameSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramedBase*>(),
                        {"set_FrameSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::LocalVoiceFramedBase::_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LocalVoiceFramedBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceClient, encoder, id, voiceInfo, channelId, frameSize);
}
inline ::Photon::Voice::LocalVoiceFramedBase* Photon::Voice::LocalVoiceFramedBase::New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, int32_t  frameSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LocalVoiceFramedBase*>(voiceClient, encoder, id, voiceInfo, channelId, frameSize));
}
// Ctor Parameters []
constexpr ::Photon::Voice::LocalVoiceFramedBase::LocalVoiceFramedBase()   {
}
