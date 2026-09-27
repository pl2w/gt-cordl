#pragma once
// IWYU pragma private; include "GlobalNamespace/PitchShiftAudioPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PitchShiftAudioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioMixVarPool_def.hpp"
#include "GlobalNamespace/zzzz__AudioMixVar_def.hpp"
#include "GlobalNamespace/zzzz__RangedFloat_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PitchShiftAudioPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchShiftAudioPlayer::*)()>(&::GlobalNamespace::PitchShiftAudioPlayer::Awake)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x596e434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchShiftAudioPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchShiftAudioPlayer::*)()>(&::GlobalNamespace::PitchShiftAudioPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x596e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchShiftAudioPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchShiftAudioPlayer::*)()>(&::GlobalNamespace::PitchShiftAudioPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x596e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchShiftAudioPlayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchShiftAudioPlayer::*)()>(&::GlobalNamespace::PitchShiftAudioPlayer::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x596e5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchShiftAudioPlayer.ApplyPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchShiftAudioPlayer::*)()>(&::GlobalNamespace::PitchShiftAudioPlayer::ApplyPitch)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x596e5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"ApplyPitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PitchShiftAudioPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PitchShiftAudioPlayer::*)()>(&::GlobalNamespace::PitchShiftAudioPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x596e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get_apply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apply;
}
constexpr bool const& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get_apply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apply;
}
constexpr void GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_set_apply(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apply = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_set__source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool>& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__pitchMixVars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchMixVars;
}
constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool> const& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__pitchMixVars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchMixVars;
}
constexpr void GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_set__pitchMixVars(::UnityW<::GlobalNamespace::AudioMixVarPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchMixVars = value;
}
constexpr ::GlobalNamespace::AudioMixVar*& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__pitchMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchMix;
}
constexpr ::GlobalNamespace::AudioMixVar* const& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__pitchMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchMix;
}
constexpr void GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_set__pitchMix(::GlobalNamespace::AudioMixVar*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchMix = value;
}
constexpr ::UnityW<::GlobalNamespace::RangedFloat>& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr ::UnityW<::GlobalNamespace::RangedFloat> const& GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_get__pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr void GlobalNamespace::PitchShiftAudioPlayer::__cordl_internal_set__pitch(::UnityW<::GlobalNamespace::RangedFloat>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitch = value;
}
inline void GlobalNamespace::PitchShiftAudioPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchShiftAudioPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchShiftAudioPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchShiftAudioPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchShiftAudioPlayer::ApplyPitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {"ApplyPitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PitchShiftAudioPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PitchShiftAudioPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PitchShiftAudioPlayer* GlobalNamespace::PitchShiftAudioPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PitchShiftAudioPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PitchShiftAudioPlayer::PitchShiftAudioPlayer()   {
}
