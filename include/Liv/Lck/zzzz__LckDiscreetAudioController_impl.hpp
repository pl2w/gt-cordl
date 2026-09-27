#pragma once
// IWYU pragma private; include "Liv/Lck/LckDiscreetAudioController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_AudioClipAndVolume_def.hpp"
#include "Liv/Lck/zzzz__LckDiscreetAudioController_AudioClip_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckDiscreetAudioController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckDiscreetAudioController::*)()>(&::Liv::Lck::LckDiscreetAudioController::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ce0cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckDiscreetAudioController.InitializeAudioClipDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckDiscreetAudioController::*)()>(&::Liv::Lck::LckDiscreetAudioController::InitializeAudioClipDictionary)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9ce0cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"InitializeAudioClipDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckDiscreetAudioController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckDiscreetAudioController::*)()>(&::Liv::Lck::LckDiscreetAudioController::Start)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9ce0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckDiscreetAudioController.PlayDiscreetAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckDiscreetAudioController::*)(::GlobalNamespace::LckDiscreetAudioController_AudioClip)>(&::Liv::Lck::LckDiscreetAudioController::PlayDiscreetAudioClip)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9ce10e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"PlayDiscreetAudioClip", {}, {::i2c::type_of<::GlobalNamespace::LckDiscreetAudioController_AudioClip>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckDiscreetAudioController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckDiscreetAudioController::*)()>(&::Liv::Lck::LckDiscreetAudioController::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ce11bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>*& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__allAudioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allAudioClips;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>* const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__allAudioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allAudioClips;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__allAudioClips(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allAudioClips = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStart;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStart;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__recordingStart(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingStart = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingSaved;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingSaved;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__recordingSaved(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingSaved = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickDown;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickDown;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__clickDown(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickDown = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickUp;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickUp;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__clickUp(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickUp = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__hoverSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__hoverSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverSound;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__hoverSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__cameraShutterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraShutterSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__cameraShutterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraShutterSound;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__cameraShutterSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraShutterSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__screenshotBeepSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenshotBeepSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__screenshotBeepSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenshotBeepSound;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__screenshotBeepSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenshotBeepSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStarted;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStarted;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__streamingStarted(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingStarted = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStopped;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStopped;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__streamingStopped(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingStopped = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingStartVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingStartVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__recordingStartVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingStartVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingSavedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingSavedVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__recordingSavedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingSavedVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__recordingSavedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingSavedVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickDownVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickDownVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickDownVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickDownVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__clickDownVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickDownVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickUpVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickUpVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__clickUpVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clickUpVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__clickUpVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clickUpVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__hoverSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverSoundVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__hoverSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverSoundVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__hoverSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverSoundVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__cameraShutterSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraShutterSoundVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__cameraShutterSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraShutterSoundVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__cameraShutterSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraShutterSoundVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__screenshotBeepSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenshotBeepSoundVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__screenshotBeepSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenshotBeepSoundVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__screenshotBeepSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenshotBeepSoundVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStartedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStartedVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStartedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStartedVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__streamingStartedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingStartedVolume = value;
}
constexpr float_t& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStoppedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStoppedVolume;
}
constexpr float_t const& Liv::Lck::LckDiscreetAudioController::__cordl_internal_get__streamingStoppedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingStoppedVolume;
}
constexpr void Liv::Lck::LckDiscreetAudioController::__cordl_internal_set__streamingStoppedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingStoppedVolume = value;
}
inline void Liv::Lck::LckDiscreetAudioController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckDiscreetAudioController::InitializeAudioClipDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"InitializeAudioClipDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckDiscreetAudioController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckDiscreetAudioController::PlayDiscreetAudioClip(::GlobalNamespace::LckDiscreetAudioController_AudioClip  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {"PlayDiscreetAudioClip", {}, {::i2c::type_of<::GlobalNamespace::LckDiscreetAudioController_AudioClip>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void Liv::Lck::LckDiscreetAudioController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckDiscreetAudioController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckDiscreetAudioController* Liv::Lck::LckDiscreetAudioController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckDiscreetAudioController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckDiscreetAudioController::LckDiscreetAudioController()   {
}
