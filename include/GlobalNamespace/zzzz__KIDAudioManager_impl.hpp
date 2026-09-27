#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAudioManager.hpp"
#include "GlobalNamespace/zzzz__KIDAudioManager_KIDSoundType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDAudioManager_def.hpp"
#include "GlobalNamespace/zzzz__KIDAudioManager_KIDSoundType_def.hpp"
#include "GlobalNamespace/zzzz__KIDAudioManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::KIDAudioManager> (*)()>(&::GlobalNamespace::KIDAudioManager::get_Instance)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a2a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a2b668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.ConfigureAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::ConfigureAudioSource)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a2b80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"ConfigureAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.InitializeSoundClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::InitializeSoundClips)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a2b984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"InitializeSoundClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.SetKIDUIAudioActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)(bool)>(&::GlobalNamespace::KIDAudioManager::SetKIDUIAudioActive)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a2babc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"SetKIDUIAudioActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)(::GlobalNamespace::KIDAudioManager_KIDSoundType)>(&::GlobalNamespace::KIDAudioManager::PlaySound)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5a2bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"PlaySound", {}, {::i2c::type_of<::GlobalNamespace::KIDAudioManager_KIDSoundType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.StartButtonHeldSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::StartButtonHeldSound)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a2be8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"StartButtonHeldSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.StopButtonHeldSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::StopButtonHeldSound)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a2bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"StopButtonHeldSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.IsInstanceValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::IsInstanceValid)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a2bb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"IsInstanceValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.IsKIDUIActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::IsKIDUIActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"IsKIDUIActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.PlaySoundWithDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)(::GlobalNamespace::KIDAudioManager_KIDSoundType)>(&::GlobalNamespace::KIDAudioManager::PlaySoundWithDelay)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2a780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"PlaySoundWithDelay", {}, {::i2c::type_of<::GlobalNamespace::KIDAudioManager_KIDSoundType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager.PlayDelayedSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::KIDAudioManager::*)(::GlobalNamespace::KIDAudioManager_KIDSoundType, float_t)>(&::GlobalNamespace::KIDAudioManager::PlayDelayedSound)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a2bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"PlayDelayedSound", {}, {::i2c::type_of<::GlobalNamespace::KIDAudioManager_KIDSoundType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager::*)()>(&::GlobalNamespace::KIDAudioManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_loopingAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopingAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_loopingAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopingAudioSource;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_loopingAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopingAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_mainMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_mainMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMixer;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_mainMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainMixer = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_KIDSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_KIDSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KIDSnapshot;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_KIDSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KIDSnapshot = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_normalSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_normalSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSnapshot;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_normalSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalSnapshot = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_kidUIGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kidUIGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_kidUIGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kidUIGroup;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_kidUIGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kidUIGroup = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_buttonClickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonClickSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_buttonClickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonClickSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_buttonClickSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonClickSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_deniedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deniedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_deniedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deniedSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_deniedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deniedSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_successSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_successSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_successSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_buttonHoverSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonHoverSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_buttonHoverSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonHoverSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_buttonHoverSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonHoverSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_buttonHeldSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonHeldSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_buttonHeldSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonHeldSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_buttonHeldSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonHeldSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_pageTransitionSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageTransitionSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_pageTransitionSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageTransitionSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_pageTransitionSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageTransitionSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_inputBackSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBackSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_inputBackSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBackSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_inputBackSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBackSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::KIDAudioManager::__cordl_internal_get_turnOffPermissionSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOffPermissionSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_turnOffPermissionSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOffPermissionSound;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_turnOffPermissionSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOffPermissionSound = value;
}
constexpr bool& GlobalNamespace::KIDAudioManager::__cordl_internal_get_isKIDUIActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKIDUIActive;
}
constexpr bool const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_isKIDUIActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isKIDUIActive;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_isKIDUIActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isKIDUIActive = value;
}
constexpr float_t& GlobalNamespace::KIDAudioManager::__cordl_internal_get_cachedGameVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedGameVolume;
}
constexpr float_t const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_cachedGameVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedGameVolume;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_cachedGameVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedGameVolume = value;
}
constexpr bool& GlobalNamespace::KIDAudioManager::__cordl_internal_get_isHoldSoundPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHoldSoundPlaying;
}
constexpr bool const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_isHoldSoundPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHoldSoundPlaying;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_isHoldSoundPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHoldSoundPlaying = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::KIDAudioManager::__cordl_internal_get_soundClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundClips;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::KIDAudioManager::__cordl_internal_get_soundClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundClips;
}
constexpr void GlobalNamespace::KIDAudioManager::__cordl_internal_set_soundClips(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundClips = value;
}
inline void GlobalNamespace::KIDAudioManager::setStaticF__instance(::UnityW<::GlobalNamespace::KIDAudioManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::KIDAudioManager>, "_instance", ::GlobalNamespace::KIDAudioManager*>(std::forward<::UnityW<::GlobalNamespace::KIDAudioManager>>(value));
}
inline ::UnityW<::GlobalNamespace::KIDAudioManager> GlobalNamespace::KIDAudioManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::KIDAudioManager>, "_instance", ::GlobalNamespace::KIDAudioManager*>();
}
inline ::UnityW<::GlobalNamespace::KIDAudioManager> GlobalNamespace::KIDAudioManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::KIDAudioManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager::ConfigureAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"ConfigureAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager::InitializeSoundClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"InitializeSoundClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager::SetKIDUIAudioActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"SetKIDUIAudioActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::KIDAudioManager::PlaySound(::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"PlaySound", {}, {::i2c::type_of<::GlobalNamespace::KIDAudioManager_KIDSoundType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, soundType);
}
inline void GlobalNamespace::KIDAudioManager::StartButtonHeldSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"StartButtonHeldSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager::StopButtonHeldSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"StopButtonHeldSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDAudioManager::IsInstanceValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"IsInstanceValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDAudioManager::IsKIDUIActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"IsKIDUIActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager::PlaySoundWithDelay(::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"PlaySoundWithDelay", {}, {::i2c::type_of<::GlobalNamespace::KIDAudioManager_KIDSoundType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, soundType);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::KIDAudioManager::PlayDelayedSound(::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {"PlayDelayedSound", {}, {::i2c::type_of<::GlobalNamespace::KIDAudioManager_KIDSoundType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, soundType, delay);
}
inline void GlobalNamespace::KIDAudioManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDAudioManager* GlobalNamespace::KIDAudioManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDAudioManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDAudioManager::KIDAudioManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::*)(int32_t)>(&::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a2bfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::*)()>(&::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2bffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::*)()>(&::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a2c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::*)()>(&::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2c0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::*)()>(&::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a2c0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::*)()>(&::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2c0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDAudioManager>& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::KIDAudioManager> const& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KIDAudioManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get_soundType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundType;
}
constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType const& GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_get_soundType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundType;
}
constexpr void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::__cordl_internal_set_soundType(::GlobalNamespace::KIDAudioManager_KIDSoundType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundType = value;
}
inline void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36* GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36::KIDAudioManager__PlayDelayedSound_d__36()   {
}
