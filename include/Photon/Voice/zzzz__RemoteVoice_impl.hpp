#pragma once
// IWYU pragma private; include "Photon/Voice/RemoteVoice.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_impl.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_impl.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__RemoteVoice_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_def.hpp"
#include "Photon/Voice/zzzz__SpacingProfile_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.get_Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceInfo (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::get_Info)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa74a888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_Info", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.set_Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(::Photon::Voice::VoiceInfo)>(&::Photon::Voice::RemoteVoice::set_Info)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa74a89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"set_Info", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.get_DelayFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::get_DelayFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_DelayFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.set_DelayFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(int32_t)>(&::Photon::Voice::RemoteVoice::set_DelayFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74a8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"set_DelayFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(::Photon::Voice::VoiceClient*, ::Photon::Voice::RemoteVoiceOptions, int32_t, int32_t, uint8_t, ::Photon::Voice::VoiceInfo, uint8_t)>(&::Photon::Voice::RemoteVoice::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xa74a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::RemoteVoiceOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.get_shortName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::get_shortName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa74acc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_shortName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.get_LogPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::get_LogPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74ae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_LogPrefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.set_LogPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(::StringW)>(&::Photon::Voice::RemoteVoice::set_LogPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74ae44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"set_LogPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.ReceiveSpacingProfileStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::ReceiveSpacingProfileStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa74ae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"ReceiveSpacingProfileStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.get_ReceiveSpacingProfileDump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::get_ReceiveSpacingProfileDump)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa74ae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_ReceiveSpacingProfileDump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.get_ReceiveSpacingProfileMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::get_ReceiveSpacingProfileMax)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa74ae74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_ReceiveSpacingProfileMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.byteDiff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t, uint8_t)>(&::Photon::Voice::RemoteVoice::byteDiff)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa74ae88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"byteDiff", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.receiveBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(::by_ref<::Photon::Voice::FrameBuffer>, uint8_t)>(&::Photon::Voice::RemoteVoice::receiveBytes)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0xa74ae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"receiveBytes", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.receiveFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(::by_ref<::Photon::Voice::FrameBuffer>)>(&::Photon::Voice::RemoteVoice::receiveFrame)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa74b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"receiveFrame", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.receiveNullFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)(int32_t)>(&::Photon::Voice::RemoteVoice::receiveNullFrames)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa74b4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"receiveNullFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.decodeThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::decodeThread)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0xa74b948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"decodeThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.removeAndDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::removeAndDispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa74bff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"removeAndDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa74c01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::RemoteVoice.__ctor_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::RemoteVoice::*)()>(&::Photon::Voice::RemoteVoice::__ctor_b__14_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa74c10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"<.ctor>b__14_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::RemoteVoice::__cordl_internal_get__Info_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Info_k__BackingField;
}
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::RemoteVoice::__cordl_internal_get__Info_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Info_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set__Info_k__BackingField(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Info_k__BackingField = value;
}
constexpr ::Photon::Voice::RemoteVoiceOptions& Photon::Voice::RemoteVoice::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::Photon::Voice::RemoteVoiceOptions const& Photon::Voice::RemoteVoice::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_options(::Photon::Voice::RemoteVoiceOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
constexpr int32_t& Photon::Voice::RemoteVoice::__cordl_internal_get_channelId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelId;
}
constexpr int32_t const& Photon::Voice::RemoteVoice::__cordl_internal_get_channelId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelId;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_channelId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelId = value;
}
constexpr int32_t& Photon::Voice::RemoteVoice::__cordl_internal_get__DelayFrames_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DelayFrames_k__BackingField;
}
constexpr int32_t const& Photon::Voice::RemoteVoice::__cordl_internal_get__DelayFrames_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DelayFrames_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set__DelayFrames_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DelayFrames_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::RemoteVoice::__cordl_internal_get_playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr int32_t const& Photon::Voice::RemoteVoice::__cordl_internal_get_playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_playerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerId = value;
}
constexpr uint8_t& Photon::Voice::RemoteVoice::__cordl_internal_get_voiceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceId;
}
constexpr uint8_t const& Photon::Voice::RemoteVoice::__cordl_internal_get_voiceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceId;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_voiceId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceId = value;
}
constexpr bool& Photon::Voice::RemoteVoice::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr bool const& Photon::Voice::RemoteVoice::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
constexpr ::System::Object*& Photon::Voice::RemoteVoice::__cordl_internal_get_disposeLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposeLock;
}
constexpr ::System::Object* const& Photon::Voice::RemoteVoice::__cordl_internal_get_disposeLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposeLock;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_disposeLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposeLock = value;
}
constexpr ::StringW& Photon::Voice::RemoteVoice::__cordl_internal_get__LogPrefix_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogPrefix_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::RemoteVoice::__cordl_internal_get__LogPrefix_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogPrefix_k__BackingField;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set__LogPrefix_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogPrefix_k__BackingField = value;
}
constexpr ::Photon::Voice::SpacingProfile*& Photon::Voice::RemoteVoice::__cordl_internal_get_receiveSpacingProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveSpacingProfile;
}
constexpr ::Photon::Voice::SpacingProfile* const& Photon::Voice::RemoteVoice::__cordl_internal_get_receiveSpacingProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveSpacingProfile;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_receiveSpacingProfile(::Photon::Voice::SpacingProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveSpacingProfile = value;
}
constexpr uint8_t& Photon::Voice::RemoteVoice::__cordl_internal_get_lastEvNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEvNumber;
}
constexpr uint8_t const& Photon::Voice::RemoteVoice::__cordl_internal_get_lastEvNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEvNumber;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_lastEvNumber(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastEvNumber = value;
}
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::RemoteVoice::__cordl_internal_get_voiceClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::RemoteVoice::__cordl_internal_get_voiceClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceClient = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>*& Photon::Voice::RemoteVoice::__cordl_internal_get_frameQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>* const& Photon::Voice::RemoteVoice::__cordl_internal_get_frameQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueue;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_frameQueue(::System::Collections::Generic::Queue_1<::Photon::Voice::FrameBuffer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameQueue = value;
}
constexpr ::System::Threading::AutoResetEvent*& Photon::Voice::RemoteVoice::__cordl_internal_get_frameQueueReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueueReady;
}
constexpr ::System::Threading::AutoResetEvent* const& Photon::Voice::RemoteVoice::__cordl_internal_get_frameQueueReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameQueueReady;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_frameQueueReady(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameQueueReady = value;
}
constexpr int32_t& Photon::Voice::RemoteVoice::__cordl_internal_get_flushingFramePosInQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flushingFramePosInQueue;
}
constexpr int32_t const& Photon::Voice::RemoteVoice::__cordl_internal_get_flushingFramePosInQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flushingFramePosInQueue;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_flushingFramePosInQueue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flushingFramePosInQueue = value;
}
constexpr ::Photon::Voice::FrameBuffer& Photon::Voice::RemoteVoice::__cordl_internal_get_nullFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullFrame;
}
constexpr ::Photon::Voice::FrameBuffer const& Photon::Voice::RemoteVoice::__cordl_internal_get_nullFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullFrame;
}
constexpr void Photon::Voice::RemoteVoice::__cordl_internal_set_nullFrame(::Photon::Voice::FrameBuffer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullFrame = value;
}
inline ::Photon::Voice::VoiceInfo Photon::Voice::RemoteVoice::get_Info()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_Info", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceInfo>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoice::set_Info(::Photon::Voice::VoiceInfo  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"set_Info", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::RemoteVoice::get_DelayFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_DelayFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoice::set_DelayFrames(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"set_DelayFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::RemoteVoice::_ctor(::Photon::Voice::VoiceClient*  client, ::Photon::Voice::RemoteVoiceOptions  options, int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info, uint8_t  lastEventNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::VoiceClient*>(), ::i2c::type_of<::Photon::Voice::RemoteVoiceOptions>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, options, channelId, playerId, voiceId, info, lastEventNumber);
}
inline ::StringW Photon::Voice::RemoteVoice::get_shortName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_shortName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Voice::RemoteVoice::get_LogPrefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_LogPrefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoice::set_LogPrefix(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"set_LogPrefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::RemoteVoice::ReceiveSpacingProfileStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"ReceiveSpacingProfileStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Photon::Voice::RemoteVoice::get_ReceiveSpacingProfileDump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_ReceiveSpacingProfileDump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t Photon::Voice::RemoteVoice::get_ReceiveSpacingProfileMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"get_ReceiveSpacingProfileMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t Photon::Voice::RemoteVoice::byteDiff(uint8_t  latest, uint8_t  last)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"byteDiff", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, latest, last);
}
inline void Photon::Voice::RemoteVoice::receiveBytes(::by_ref<::Photon::Voice::FrameBuffer>  receivedBytes, uint8_t  evNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"receiveBytes", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receivedBytes, evNumber);
}
inline void Photon::Voice::RemoteVoice::receiveFrame(::by_ref<::Photon::Voice::FrameBuffer>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"receiveFrame", {}, {::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void Photon::Voice::RemoteVoice::receiveNullFrames(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"receiveNullFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void Photon::Voice::RemoteVoice::decodeThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"decodeThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoice::removeAndDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"removeAndDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoice::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::RemoteVoice::__ctor_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::RemoteVoice*>(),
                        {"<.ctor>b__14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::RemoteVoice* Photon::Voice::RemoteVoice::New_ctor(::Photon::Voice::VoiceClient*  client, ::Photon::Voice::RemoteVoiceOptions  options, int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  info, uint8_t  lastEventNumber)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::RemoteVoice*>(client, options, channelId, playerId, voiceId, info, lastEventNumber));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::RemoteVoice::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::RemoteVoice::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::RemoteVoice::RemoteVoice()   {
}
