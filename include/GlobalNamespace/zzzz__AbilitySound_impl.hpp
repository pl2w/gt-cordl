#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilitySound.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_SoundSelectMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_SoundSelectMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AbilitySound.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AbilitySound::*)()>(&::GlobalNamespace::AbilitySound::IsValid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58663ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilitySound.UpdateNextSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilitySound::*)()>(&::GlobalNamespace::AbilitySound::UpdateNextSound)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5866440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"UpdateNextSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilitySound.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilitySound::*)(::UnityEngine::AudioSource*)>(&::GlobalNamespace::AbilitySound::Play)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58664cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilitySound.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilitySound::*)()>(&::GlobalNamespace::AbilitySound::Stop)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58666a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AbilitySound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AbilitySound::*)()>(&::GlobalNamespace::AbilitySound::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x586679c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AbilitySound::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& GlobalNamespace::AbilitySound::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr float_t& GlobalNamespace::AbilitySound::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr float_t const& GlobalNamespace::AbilitySound::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
constexpr bool& GlobalNamespace::AbilitySound::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr bool const& GlobalNamespace::AbilitySound::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop = value;
}
constexpr float_t& GlobalNamespace::AbilitySound::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::AbilitySound::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::AbilitySound::__cordl_internal_get_sounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::AbilitySound::__cordl_internal_get_sounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sounds;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_sounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sounds = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::AbilitySound::__cordl_internal_get_currentSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::AbilitySound::__cordl_internal_get_currentSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSound;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_currentSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AbilitySound::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AbilitySound::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AbilitySound::__cordl_internal_get_usedAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AbilitySound::__cordl_internal_get_usedAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usedAudioSource;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_usedAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usedAudioSource = value;
}
constexpr int32_t& GlobalNamespace::AbilitySound::__cordl_internal_get_nextSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSound;
}
constexpr int32_t const& GlobalNamespace::AbilitySound::__cordl_internal_get_nextSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSound;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_nextSound(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSound = value;
}
constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode& GlobalNamespace::AbilitySound::__cordl_internal_get_soundSelectMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundSelectMode;
}
constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode const& GlobalNamespace::AbilitySound::__cordl_internal_get_soundSelectMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundSelectMode;
}
constexpr void GlobalNamespace::AbilitySound::__cordl_internal_set_soundSelectMode(::GlobalNamespace::AbilitySound_SoundSelectMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundSelectMode = value;
}
inline bool GlobalNamespace::AbilitySound::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AbilitySound::UpdateNextSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"UpdateNextSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AbilitySound::Play(::UnityEngine::AudioSource*  audioSourceIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSourceIn);
}
inline void GlobalNamespace::AbilitySound::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AbilitySound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AbilitySound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AbilitySound* GlobalNamespace::AbilitySound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AbilitySound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AbilitySound::AbilitySound()   {
}
