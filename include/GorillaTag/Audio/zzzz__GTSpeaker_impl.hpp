#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTSpeaker.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "GorillaTag/Audio/zzzz__GTSpeaker_def.hpp"
#include "GorillaTag/Audio/zzzz__GTSpeaker_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__FrameOut_1_def.hpp"
#include "Photon/Voice/zzzz__IAudioOut_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)()>(&::GorillaTag::Audio::GTSpeaker::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d51570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.AddExternalAudioSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)(::ArrayW<::UnityEngine::AudioSource*>)>(&::GorillaTag::Audio::GTSpeaker::AddExternalAudioSources)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d51630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"AddExternalAudioSources", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AudioSource*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)()>(&::GorillaTag::Audio::GTSpeaker::Initialize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d51aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.InitializeExternalAudioSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)()>(&::GorillaTag::Audio::GTSpeaker::InitializeExternalAudioSources)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5d51674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"InitializeExternalAudioSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.GetAudioOutFactoryFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* (::GorillaTag::Audio::GTSpeaker::*)(::UnityEngine::AudioSource*, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*)>(&::GorillaTag::Audio::GTSpeaker::GetAudioOutFactoryFromSource)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5d51bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"GetAudioOutFactoryFromSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.OnAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)(::Photon::Voice::FrameOut_1<float_t>*)>(&::GorillaTag::Audio::GTSpeaker::OnAudioFrame)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d51cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.AudioOutputStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)(int32_t, int32_t, int32_t)>(&::GorillaTag::Audio::GTSpeaker::AudioOutputStart)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d51f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.ExternalAudioOutputStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)(int32_t, int32_t, int32_t)>(&::GorillaTag::Audio::GTSpeaker::ExternalAudioOutputStart)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5d5181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"ExternalAudioOutputStart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.AudioOutputStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)()>(&::GorillaTag::Audio::GTSpeaker::AudioOutputStop)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5d51f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.AudioOutputService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)()>(&::GorillaTag::Audio::GTSpeaker::AudioOutputService)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5d52124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker.ToggleAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)(bool)>(&::GorillaTag::Audio::GTSpeaker::ToggleAudioSource)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d5233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"ToggleAudioSource", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker::*)()>(&::GorillaTag::Audio::GTSpeaker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d524e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Audio::GTSpeaker::__cordl_internal_get_BroadcastExternal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BroadcastExternal;
}
constexpr bool const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get_BroadcastExternal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BroadcastExternal;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set_BroadcastExternal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BroadcastExternal = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__externalAudioSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalAudioSources;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__externalAudioSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalAudioSources;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__externalAudioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____externalAudioSources = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>*& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__externalAudioOutputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalAudioOutputs;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>* const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__externalAudioOutputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalAudioOutputs;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__externalAudioOutputs(::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____externalAudioOutputs = value;
}
constexpr int32_t& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr int32_t const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frequency;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__frequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frequency = value;
}
constexpr int32_t& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int32_t const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__frameSamplesPerChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSamplesPerChannel;
}
constexpr int32_t const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__frameSamplesPerChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSamplesPerChannel;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__frameSamplesPerChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSamplesPerChannel = value;
}
constexpr bool& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__initializedExternalAudioSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializedExternalAudioSources;
}
constexpr bool const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__initializedExternalAudioSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializedExternalAudioSources;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__initializedExternalAudioSources(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializedExternalAudioSources = value;
}
constexpr bool& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__audioOutputStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioOutputStarted;
}
constexpr bool const& GorillaTag::Audio::GTSpeaker::__cordl_internal_get__audioOutputStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioOutputStarted;
}
constexpr void GorillaTag::Audio::GTSpeaker::__cordl_internal_set__audioOutputStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioOutputStarted = value;
}
inline void GorillaTag::Audio::GTSpeaker::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTSpeaker::AddExternalAudioSources(::ArrayW<::UnityEngine::AudioSource*>  audioSources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"AddExternalAudioSources", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AudioSource*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSources);
}
inline void GorillaTag::Audio::GTSpeaker::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTSpeaker::InitializeExternalAudioSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"InitializeExternalAudioSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* GorillaTag::Audio::GTSpeaker::GetAudioOutFactoryFromSource(::UnityEngine::AudioSource*  source, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  pdc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"GetAudioOutFactoryFromSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*>(this, ___internal_method, source, pdc);
}
inline void GorillaTag::Audio::GTSpeaker::OnAudioFrame(::Photon::Voice::FrameOut_1<float_t>*  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void GorillaTag::Audio::GTSpeaker::AudioOutputStart(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, channels, frameSamplesPerChannel);
}
inline void GorillaTag::Audio::GTSpeaker::ExternalAudioOutputStart(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"ExternalAudioOutputStart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, channels, frameSamplesPerChannel);
}
inline void GorillaTag::Audio::GTSpeaker::AudioOutputStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTSpeaker::AudioOutputService()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTSpeaker::ToggleAudioSource(bool  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {"ToggleAudioSource", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void GorillaTag::Audio::GTSpeaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::GTSpeaker* GorillaTag::Audio::GTSpeaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::GTSpeaker*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTSpeaker::GTSpeaker()   {
}
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::*)()>(&::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d51cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0._GetAudioOutFactoryFromSource_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioOut_1<float_t>* (::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::*)()>(&::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::_GetAudioOutFactoryFromSource_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d524e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*>(),
                        {"<GetAudioOutFactoryFromSource>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_get_pdc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pdc;
}
constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_get_pdc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pdc;
}
constexpr void GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_set_pdc(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pdc = value;
}
constexpr ::UnityW<::GorillaTag::Audio::GTSpeaker>& GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Audio::GTSpeaker> const& GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Audio::GTSpeaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::IAudioOut_1<float_t>* GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::_GetAudioOutFactoryFromSource_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*>(),
                        {"<GetAudioOutFactoryFromSource>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioOut_1<float_t>*>(this, ___internal_method);
}
inline ::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0* GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0::GTSpeaker___c__DisplayClass12_0()   {
}
