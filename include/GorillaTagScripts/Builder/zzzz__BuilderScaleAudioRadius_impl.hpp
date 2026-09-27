#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderScaleAudioRadius.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderScaleAudioRadius_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)()>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c3044c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)()>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c30478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)()>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::LateUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c304f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)()>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::PlaySound)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c30764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"PlaySound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius.SetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)(float_t)>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::SetScale)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5c30554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius.RevertScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)()>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::RevertScale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c30488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"RevertScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderScaleAudioRadius._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderScaleAudioRadius::*)()>(&::GorillaTagScripts::Builder::BuilderScaleAudioRadius::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c3083c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_useLossyScaleOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLossyScaleOnEnable;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_useLossyScaleOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLossyScaleOnEnable;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_useLossyScaleOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useLossyScaleOnEnable = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_autoPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPlay;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_autoPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPlay;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_autoPlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoPlay = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_autoPlaySoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPlaySoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_autoPlaySoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoPlaySoundBank;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_autoPlaySoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoPlaySoundBank = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_minDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDist;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_minDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDist;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_minDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDist = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_maxDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDist;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_maxDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDist;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_maxDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDist = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_customCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_customCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCurve;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_customCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_scaledCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaledCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_scaledCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaledCurve;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_scaledCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaledCurve = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_shouldRevert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRevert;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_shouldRevert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRevert;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_shouldRevert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldRevert = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_setScaleNextFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setScaleNextFrame;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_setScaleNextFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setScaleNextFrame;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_setScaleNextFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setScaleNextFrame = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_enableFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableFrame;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_get_enableFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableFrame;
}
constexpr void GorillaTagScripts::Builder::BuilderScaleAudioRadius::__cordl_internal_set_enableFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableFrame = value;
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::PlaySound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"PlaySound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::SetScale(float_t  inScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inScale);
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::RevertScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {"RevertScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderScaleAudioRadius::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderScaleAudioRadius* GorillaTagScripts::Builder::BuilderScaleAudioRadius::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderScaleAudioRadius*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderScaleAudioRadius::BuilderScaleAudioRadius()   {
}
