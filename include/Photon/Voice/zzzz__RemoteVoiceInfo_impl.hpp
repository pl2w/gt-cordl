#pragma once
// IWYU pragma private; include "Photon/Voice/RemoteVoiceInfo.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceInfo_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceInfo::*)(int32_t, int32_t, uint8_t, ::Photon::Voice::VoiceInfo)>(&::Photon::Voice::RemoteVoiceInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa752e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.get_Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceInfo (::Photon::Voice::RemoteVoiceInfo::*)()>(&::Photon::Voice::RemoteVoiceInfo::get_Info)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa75409c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_Info", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.set_Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceInfo::*)(::Photon::Voice::VoiceInfo)>(&::Photon::Voice::RemoteVoiceInfo::set_Info)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa7540b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_Info", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.get_ChannelId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::RemoteVoiceInfo::*)()>(&::Photon::Voice::RemoteVoiceInfo::get_ChannelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7540d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_ChannelId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.set_ChannelId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceInfo::*)(int32_t)>(&::Photon::Voice::RemoteVoiceInfo::set_ChannelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7540dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_ChannelId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::RemoteVoiceInfo::*)()>(&::Photon::Voice::RemoteVoiceInfo::get_PlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7540e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.set_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceInfo::*)(int32_t)>(&::Photon::Voice::RemoteVoiceInfo::set_PlayerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7540ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.get_VoiceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::RemoteVoiceInfo::*)()>(&::Photon::Voice::RemoteVoiceInfo::get_VoiceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7540f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_VoiceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoiceInfo.set_VoiceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoiceInfo::*)(uint8_t)>(&::Photon::Voice::RemoteVoiceInfo::set_VoiceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7540fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_VoiceId", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__Info_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Info_k__BackingField;
}
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__Info_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Info_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoiceInfo::__cordl_internal_set__Info_k__BackingField(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Info_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__ChannelId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelId_k__BackingField;
}
constexpr int32_t const& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__ChannelId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelId_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoiceInfo::__cordl_internal_set__ChannelId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChannelId_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__PlayerId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerId_k__BackingField;
}
constexpr int32_t const& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__PlayerId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerId_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoiceInfo::__cordl_internal_set__PlayerId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerId_k__BackingField = value;
}
constexpr uint8_t& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__VoiceId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceId_k__BackingField;
}
constexpr uint8_t const& Photon::Voice::RemoteVoiceInfo::__cordl_internal_get__VoiceId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceId_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoiceInfo::__cordl_internal_set__VoiceId_k__BackingField(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoiceId_k__BackingField = value;
}
inline void Photon::Voice::RemoteVoiceInfo::_ctor(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, voiceId, info);
}
inline ::Photon::Voice::VoiceInfo Photon::Voice::RemoteVoiceInfo::get_Info()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_Info", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceInfo>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoiceInfo::set_Info(::Photon::Voice::VoiceInfo  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_Info", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::RemoteVoiceInfo::get_ChannelId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_ChannelId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoiceInfo::set_ChannelId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_ChannelId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::RemoteVoiceInfo::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoiceInfo::set_PlayerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_PlayerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Voice::RemoteVoiceInfo::get_VoiceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"get_VoiceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoiceInfo::set_VoiceId(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoiceInfo*>(),
                        {"set_VoiceId", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::RemoteVoiceInfo* Photon::Voice::RemoteVoiceInfo::New_ctor(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::RemoteVoiceInfo*>(channelId, playerId, voiceId, info));
}
// Ctor Parameters []
constexpr ::Photon::Voice::RemoteVoiceInfo::RemoteVoiceInfo()   {
}
