#pragma once
// IWYU pragma private; include "Oculus/Interaction/AudioTrigger.hpp"
#include "Oculus/Interaction/zzzz__MinMaxPair_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__AudioTrigger_def.hpp"
#include "Oculus/Interaction/zzzz__MinMaxPair_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_Volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(float_t)>(&::Oculus::Interaction::AudioTrigger::set_Volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_VolumeRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::MinMaxPair (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_VolumeRandomization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa42bef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_VolumeRandomization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_VolumeRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(::Oculus::Interaction::MinMaxPair)>(&::Oculus::Interaction::AudioTrigger::set_VolumeRandomization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa42bf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_VolumeRandomization", {}, {::i2c::type_of<::Oculus::Interaction::MinMaxPair>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_Pitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_Pitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Pitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_Pitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(float_t)>(&::Oculus::Interaction::AudioTrigger::set_Pitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Pitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_PitchRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::MinMaxPair (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_PitchRandomization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa42bf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_PitchRandomization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_PitchRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(::Oculus::Interaction::MinMaxPair)>(&::Oculus::Interaction::AudioTrigger::set_PitchRandomization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa42bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_PitchRandomization", {}, {::i2c::type_of<::Oculus::Interaction::MinMaxPair>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_Spatialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_Spatialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Spatialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_Spatialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(bool)>(&::Oculus::Interaction::AudioTrigger::set_Spatialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Spatialize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(bool)>(&::Oculus::Interaction::AudioTrigger::set_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.get_ChanceToPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::get_ChanceToPlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_ChanceToPlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.set_ChanceToPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(float_t)>(&::Oculus::Interaction::AudioTrigger::set_ChanceToPlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42bf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_ChanceToPlay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa42bf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                    {::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::PlayAudio)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa42bc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"PlayAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.RandomClipWithoutRepeat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::RandomClipWithoutRepeat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa42c02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"RandomClipWithoutRepeat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.InjectAllAudioTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(::UnityEngine::AudioSource*, ::ArrayW<::UnityEngine::AudioClip*>)>(&::Oculus::Interaction::AudioTrigger::InjectAllAudioTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa42c094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectAllAudioTrigger", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::ArrayW<::UnityEngine::AudioClip*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.InjectAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(::UnityEngine::AudioSource*)>(&::Oculus::Interaction::AudioTrigger::InjectAudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.InjectAudioClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(::ArrayW<::UnityEngine::AudioClip*>)>(&::Oculus::Interaction::AudioTrigger::InjectAudioClips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectAudioClips", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AudioClip*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger.InjectOptionalPlayOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)(bool)>(&::Oculus::Interaction::AudioTrigger::InjectOptionalPlayOnStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42c0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectOptionalPlayOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AudioTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AudioTrigger::*)()>(&::Oculus::Interaction::AudioTrigger::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa42c0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Interaction::AudioTrigger::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& Oculus::Interaction::AudioTrigger::__cordl_internal_get__audioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__audioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClips;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioClips = value;
}
constexpr float_t& Oculus::Interaction::AudioTrigger::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr float_t const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr ::Oculus::Interaction::MinMaxPair& Oculus::Interaction::AudioTrigger::__cordl_internal_get__volumeRandomization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeRandomization;
}
constexpr ::Oculus::Interaction::MinMaxPair const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__volumeRandomization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeRandomization;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__volumeRandomization(::Oculus::Interaction::MinMaxPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeRandomization = value;
}
constexpr float_t& Oculus::Interaction::AudioTrigger::__cordl_internal_get__pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr float_t const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitch = value;
}
constexpr ::Oculus::Interaction::MinMaxPair& Oculus::Interaction::AudioTrigger::__cordl_internal_get__pitchRandomization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchRandomization;
}
constexpr ::Oculus::Interaction::MinMaxPair const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__pitchRandomization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchRandomization;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__pitchRandomization(::Oculus::Interaction::MinMaxPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchRandomization = value;
}
constexpr bool& Oculus::Interaction::AudioTrigger::__cordl_internal_get__spatialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialize;
}
constexpr bool const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__spatialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialize;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__spatialize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialize = value;
}
constexpr bool& Oculus::Interaction::AudioTrigger::__cordl_internal_get__loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr bool const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loop = value;
}
constexpr float_t& Oculus::Interaction::AudioTrigger::__cordl_internal_get__chanceToPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chanceToPlay;
}
constexpr float_t const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__chanceToPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chanceToPlay;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__chanceToPlay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chanceToPlay = value;
}
constexpr bool& Oculus::Interaction::AudioTrigger::__cordl_internal_get__playOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playOnStart;
}
constexpr bool const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__playOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playOnStart;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__playOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playOnStart = value;
}
constexpr int32_t& Oculus::Interaction::AudioTrigger::__cordl_internal_get__previousAudioClipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousAudioClipIndex;
}
constexpr int32_t const& Oculus::Interaction::AudioTrigger::__cordl_internal_get__previousAudioClipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousAudioClipIndex;
}
constexpr void Oculus::Interaction::AudioTrigger::__cordl_internal_set__previousAudioClipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousAudioClipIndex = value;
}
inline float_t Oculus::Interaction::AudioTrigger::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_Volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::MinMaxPair Oculus::Interaction::AudioTrigger::get_VolumeRandomization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_VolumeRandomization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MinMaxPair>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_VolumeRandomization(::Oculus::Interaction::MinMaxPair  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_VolumeRandomization", {}, {::i2c::type_of<::Oculus::Interaction::MinMaxPair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::AudioTrigger::get_Pitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Pitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_Pitch(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Pitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::MinMaxPair Oculus::Interaction::AudioTrigger::get_PitchRandomization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_PitchRandomization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MinMaxPair>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_PitchRandomization(::Oculus::Interaction::MinMaxPair  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_PitchRandomization", {}, {::i2c::type_of<::Oculus::Interaction::MinMaxPair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::AudioTrigger::get_Spatialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Spatialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_Spatialize(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Spatialize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::AudioTrigger::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_Loop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::AudioTrigger::get_ChanceToPlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"get_ChanceToPlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::set_ChanceToPlay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"set_ChanceToPlay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::AudioTrigger::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::PlayAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"PlayAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> Oculus::Interaction::AudioTrigger::RandomClipWithoutRepeat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"RandomClipWithoutRepeat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void Oculus::Interaction::AudioTrigger::InjectAllAudioTrigger(::UnityEngine::AudioSource*  audioSource, ::ArrayW<::UnityEngine::AudioClip*>  audioClips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectAllAudioTrigger", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::ArrayW<::UnityEngine::AudioClip*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource, audioClips);
}
inline void Oculus::Interaction::AudioTrigger::InjectAudioSource(::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource);
}
inline void Oculus::Interaction::AudioTrigger::InjectAudioClips(::ArrayW<::UnityEngine::AudioClip*>  audioClips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectAudioClips", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AudioClip*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClips);
}
inline void Oculus::Interaction::AudioTrigger::InjectOptionalPlayOnStart(bool  playOnStart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {"InjectOptionalPlayOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playOnStart);
}
inline void Oculus::Interaction::AudioTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AudioTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::AudioTrigger* Oculus::Interaction::AudioTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AudioTrigger*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AudioTrigger::AudioTrigger()   {
}
