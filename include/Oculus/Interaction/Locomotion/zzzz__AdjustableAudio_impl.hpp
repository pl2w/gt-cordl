#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/AdjustableAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__AdjustableAudio_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.get_AudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::get_AudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_AudioClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.set_AudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(::UnityEngine::AudioClip*)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::set_AudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_AudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.get_VolumeFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::get_VolumeFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_VolumeFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.set_VolumeFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(float_t)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::set_VolumeFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_VolumeFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.get_VolumeCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::get_VolumeCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_VolumeCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.set_VolumeCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::set_VolumeCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_VolumeCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.get_PitchCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::get_PitchCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_PitchCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.set_PitchCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::set_PitchCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_PitchCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa42dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(float_t, float_t, float_t)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::PlayAudio)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa42ddf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"PlayAudio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.InjectAllAdjustableAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(::UnityEngine::AudioSource*)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::InjectAllAdjustableAudio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42ded4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"InjectAllAdjustableAudio", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio.InjectAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)(::UnityEngine::AudioSource*)>(&::Oculus::Interaction::Locomotion::AdjustableAudio::InjectAudioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42dedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"InjectAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AdjustableAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AdjustableAudio::*)()>(&::Oculus::Interaction::Locomotion::AdjustableAudio::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa42dee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioClip;
}
constexpr void Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioClip = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__volumeFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeFactor;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__volumeFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeFactor;
}
constexpr void Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_set__volumeFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeFactor = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__volumeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__volumeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeCurve;
}
constexpr void Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_set__volumeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__pitchCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__pitchCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchCurve;
}
constexpr void Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_set__pitchCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchCurve = value;
}
constexpr bool& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::AdjustableAudio::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityW<::UnityEngine::AudioClip> Oculus::Interaction::Locomotion::AdjustableAudio::get_AudioClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_AudioClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::set_AudioClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_AudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::AdjustableAudio::get_VolumeFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_VolumeFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::set_VolumeFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_VolumeFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::AdjustableAudio::get_VolumeCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_VolumeCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::set_VolumeCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_VolumeCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::AdjustableAudio::get_PitchCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"get_PitchCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::set_PitchCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"set_PitchCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::PlayAudio(float_t  volumeT, float_t  pitchT, float_t  pan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"PlayAudio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeT, pitchT, pan);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::InjectAllAdjustableAudio(::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"InjectAllAdjustableAudio", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::InjectAudioSource(::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {"InjectAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource);
}
inline void Oculus::Interaction::Locomotion::AdjustableAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AdjustableAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::AdjustableAudio* Oculus::Interaction::Locomotion::AdjustableAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::AdjustableAudio*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::AdjustableAudio::AdjustableAudio()   {
}
