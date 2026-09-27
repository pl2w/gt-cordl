#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/BaseAudioPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioPlayer_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioPlayer_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.get_ClipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::get_ClipStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"get_ClipStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.set_ClipStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)(::Meta::Voice::Audio::IAudioClipStream*)>(&::Meta::Voice::Audio::BaseAudioPlayer::set_ClipStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"set_ClipStream", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.get_SpeechNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::get_SpeechNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"get_SpeechNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.set_SpeechNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Audio::BaseAudioPlayer::set_SpeechNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"set_SpeechNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::get_IsPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e6c814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.get_CanSetElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::get_CanSetElapsedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.get_ElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::get_ElapsedSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.GetPlaybackErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::GetPlaybackErrors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)(::Meta::Voice::Audio::IAudioClipStream*, int32_t, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Audio::BaseAudioPlayer::Play)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e6c834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)(int32_t)>(&::Meta::Voice::Audio::BaseAudioPlayer::Play)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::Pause)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.Resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::Resume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::Stop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e6c8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::BaseAudioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::BaseAudioPlayer::*)()>(&::Meta::Voice::Audio::BaseAudioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6c8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Audio::IAudioClipStream*& Meta::Voice::Audio::BaseAudioPlayer::__cordl_internal_get__ClipStream_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipStream_k__BackingField;
}
constexpr ::Meta::Voice::Audio::IAudioClipStream* const& Meta::Voice::Audio::BaseAudioPlayer::__cordl_internal_get__ClipStream_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClipStream_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioPlayer::__cordl_internal_set__ClipStream_k__BackingField(::Meta::Voice::Audio::IAudioClipStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClipStream_k__BackingField = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::Voice::Audio::BaseAudioPlayer::__cordl_internal_get__SpeechNode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpeechNode_k__BackingField;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::Voice::Audio::BaseAudioPlayer::__cordl_internal_get__SpeechNode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpeechNode_k__BackingField;
}
constexpr void Meta::Voice::Audio::BaseAudioPlayer::__cordl_internal_set__SpeechNode_k__BackingField(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpeechNode_k__BackingField = value;
}
inline ::Meta::Voice::Audio::IAudioClipStream* Meta::Voice::Audio::BaseAudioPlayer::get_ClipStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"get_ClipStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::IAudioClipStream*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::set_ClipStream(::Meta::Voice::Audio::IAudioClipStream*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"set_ClipStream", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Audio::BaseAudioPlayer::get_SpeechNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"get_SpeechNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::set_SpeechNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"set_SpeechNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Audio::BaseAudioPlayer::get_IsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::BaseAudioPlayer::get_CanSetElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::BaseAudioPlayer::get_ElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Audio::BaseAudioPlayer::GetPlaybackErrors()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::Play(::Meta::Voice::Audio::IAudioClipStream*  clipStream, int32_t  offsetSamples, ::Meta::WitAi::Json::WitResponseNode*  speechNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::Meta::Voice::Audio::IAudioClipStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipStream, offsetSamples, speechNode);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::Play(int32_t  offsetSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offsetSamples);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::Pause()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::Resume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::BaseAudioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::BaseAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::BaseAudioPlayer* Meta::Voice::Audio::BaseAudioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::BaseAudioPlayer*>());
}
/// @brief Convert operator to "::Meta::Voice::Audio::IAudioPlayer"
constexpr  Meta::Voice::Audio::BaseAudioPlayer::operator ::Meta::Voice::Audio::IAudioPlayer*() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::IAudioPlayer"
constexpr ::Meta::Voice::Audio::IAudioPlayer* Meta::Voice::Audio::BaseAudioPlayer::i___Meta__Voice__Audio__IAudioPlayer() noexcept {
return static_cast<::Meta::Voice::Audio::IAudioPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::BaseAudioPlayer::BaseAudioPlayer()   {
}
