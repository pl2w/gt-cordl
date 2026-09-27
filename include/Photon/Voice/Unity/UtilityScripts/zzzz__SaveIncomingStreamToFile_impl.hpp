#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/SaveIncomingStreamToFile.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__SaveIncomingStreamToFile_def.hpp"
#include "CSCore/Codecs/WAV/zzzz__WaveWriter_def.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__SaveIncomingStreamToFile_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa78c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile.OnSpeakerLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::*)(::Photon::Voice::Unity::Speaker*)>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::OnSpeakerLinked)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa78c37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"OnSpeakerLinked", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::OnDestroy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa78c418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile.OnRemoteVoiceAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::OnRemoteVoiceAdded)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa78c504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"OnRemoteVoiceAdded", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile.GetFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::GetFilePath)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xa78c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"GetFilePath", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::__cordl_internal_get_muteLocalSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteLocalSpeaker;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::__cordl_internal_get_muteLocalSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteLocalSpeaker;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::__cordl_internal_set_muteLocalSpeaker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteLocalSpeaker = value;
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::OnSpeakerLinked(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"OnSpeakerLinked", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::OnRemoteVoiceAdded(::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoiceLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"OnRemoteVoiceAdded", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteVoiceLink);
}
inline ::StringW Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::GetFilePath(::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoiceLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {"GetFilePath", {}, {::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, remoteVoiceLink);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile* Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile::SaveIncomingStreamToFile()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0._OnRemoteVoiceAdded_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::*)(::Photon::Voice::FrameOut_1<float_t>*)>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::_OnRemoteVoiceAdded_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa78ca78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>(),
                        {"<OnRemoteVoiceAdded>b__0", {}, {::i2c::type_of<::Photon::Voice::FrameOut_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0._OnRemoteVoiceAdded_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::_OnRemoteVoiceAdded_b__1)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa78cad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>(),
                        {"<OnRemoteVoiceAdded>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::CSCore::Codecs::WAV::WaveWriter*& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::__cordl_internal_get_waveWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveWriter;
}
constexpr ::CSCore::Codecs::WAV::WaveWriter* const& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::__cordl_internal_get_waveWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveWriter;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::__cordl_internal_set_waveWriter(::CSCore::Codecs::WAV::WaveWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveWriter = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile>& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile> const& Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::__cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::_OnRemoteVoiceAdded_b__0(::Photon::Voice::FrameOut_1<float_t>*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>(),
                        {"<OnRemoteVoiceAdded>b__0", {}, {::i2c::type_of<::Photon::Voice::FrameOut_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::_OnRemoteVoiceAdded_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>(),
                        {"<OnRemoteVoiceAdded>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0* Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::SaveIncomingStreamToFile___c__DisplayClass5_0::SaveIncomingStreamToFile___c__DisplayClass5_0()   {
}
