#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/RemoteVoiceLink.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.add_FloatFrameDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*)>(&::Photon::Voice::Unity::RemoteVoiceLink::add_FloatFrameDecoded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa77175c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"add_FloatFrameDecoded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.remove_FloatFrameDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*)>(&::Photon::Voice::Unity::RemoteVoiceLink::remove_FloatFrameDecoded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa77180c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"remove_FloatFrameDecoded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.add_RemoteVoiceRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::System::Action*)>(&::Photon::Voice::Unity::RemoteVoiceLink::add_RemoteVoiceRemoved)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa7718bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"add_RemoteVoiceRemoved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.remove_RemoteVoiceRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::System::Action*)>(&::Photon::Voice::Unity::RemoteVoiceLink::remove_RemoteVoiceRemoved)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa771958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"remove_RemoteVoiceRemoved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::Photon::Voice::VoiceInfo, int32_t, int32_t, int32_t)>(&::Photon::Voice::Unity::RemoteVoiceLink::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa7719f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::by_ref<::Photon::Voice::RemoteVoiceOptions>)>(&::Photon::Voice::Unity::RemoteVoiceLink::Init)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa771a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Photon::Voice::RemoteVoiceOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.OnRemoteVoiceRemoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)()>(&::Photon::Voice::Unity::RemoteVoiceLink::OnRemoteVoiceRemoveAction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa771b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"OnRemoteVoiceRemoveAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.OnDecodedFrameFloatAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::RemoteVoiceLink::*)(::Photon::Voice::FrameOut_1<float_t>*)>(&::Photon::Voice::Unity::RemoteVoiceLink::OnDecodedFrameFloatAction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa771b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"OnDecodedFrameFloatAction", {}, {::i2c::type_of<::Photon::Voice::FrameOut_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::RemoteVoiceLink::*)()>(&::Photon::Voice::Unity::RemoteVoiceLink::ToString)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa771b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::RemoteVoiceLink.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::RemoteVoiceLink::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&::Photon::Voice::Unity::RemoteVoiceLink::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa771d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"Equals", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_Info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_Info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Info;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_Info(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Info = value;
}
constexpr int32_t& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr int32_t const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_PlayerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerId = value;
}
constexpr int32_t& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_VoiceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceId;
}
constexpr int32_t const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_VoiceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceId;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_VoiceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceId = value;
}
constexpr int32_t& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_ChannelId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelId;
}
constexpr int32_t const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_ChannelId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChannelId;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_ChannelId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChannelId = value;
}
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_FloatFrameDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloatFrameDecoded;
}
constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>* const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_FloatFrameDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloatFrameDecoded;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_FloatFrameDecoded(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FloatFrameDecoded = value;
}
constexpr ::System::Action*& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_RemoteVoiceRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteVoiceRemoved;
}
constexpr ::System::Action* const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_RemoteVoiceRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteVoiceRemoved;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_RemoteVoiceRemoved(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemoteVoiceRemoved = value;
}
constexpr ::StringW& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_cached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cached;
}
constexpr ::StringW const& Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_get_cached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cached;
}
constexpr void Photon::Voice::Unity::RemoteVoiceLink::__cordl_internal_set_cached(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cached = value;
}
inline void Photon::Voice::Unity::RemoteVoiceLink::add_FloatFrameDecoded(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"add_FloatFrameDecoded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::remove_FloatFrameDecoded(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"remove_FloatFrameDecoded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::add_RemoteVoiceRemoved(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"add_RemoteVoiceRemoved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::remove_RemoteVoiceRemoved(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"remove_RemoteVoiceRemoved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::_ctor(::Photon::Voice::VoiceInfo  info, int32_t  playerId, int32_t  voiceId, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, playerId, voiceId, channelId);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::Init(::by_ref<::Photon::Voice::RemoteVoiceOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Photon::Voice::RemoteVoiceOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::OnRemoteVoiceRemoveAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"OnRemoteVoiceRemoveAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::RemoteVoiceLink::OnDecodedFrameFloatAction(::Photon::Voice::FrameOut_1<float_t>*  floats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"OnDecodedFrameFloatAction", {}, {::i2c::type_of<::Photon::Voice::FrameOut_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, floats);
}
inline ::StringW Photon::Voice::Unity::RemoteVoiceLink::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::RemoteVoiceLink::Equals(::Photon::Voice::Unity::RemoteVoiceLink*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::RemoteVoiceLink*>(),
                        {"Equals", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::Photon::Voice::Unity::RemoteVoiceLink* Photon::Voice::Unity::RemoteVoiceLink::New_ctor(::Photon::Voice::VoiceInfo  info, int32_t  playerId, int32_t  voiceId, int32_t  channelId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::RemoteVoiceLink*>(info, playerId, voiceId, channelId));
}
/// @brief Convert operator to "::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>"
constexpr  Photon::Voice::Unity::RemoteVoiceLink::operator ::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>*() noexcept {
return static_cast<::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>"
constexpr ::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>* Photon::Voice::Unity::RemoteVoiceLink::i___System__IEquatable_1___Photon__Voice__Unity__RemoteVoiceLink__() noexcept {
return static_cast<::System::IEquatable_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::RemoteVoiceLink::RemoteVoiceLink()   {
}
