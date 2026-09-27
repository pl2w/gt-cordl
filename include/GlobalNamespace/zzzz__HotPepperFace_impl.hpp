#pragma once
// IWYU pragma private; include "GlobalNamespace/HotPepperFace.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HotPepperFace_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HotPepperFace.PlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperFace::*)(float_t)>(&::GlobalNamespace::HotPepperFace::PlayFX)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x578ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {"PlayFX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperFace.PlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperFace::*)()>(&::GlobalNamespace::HotPepperFace::PlayFX)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x578acb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {"PlayFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperFace.StopFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperFace::*)()>(&::GlobalNamespace::HotPepperFace::StopFX)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x578ad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {"StopFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HotPepperFace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HotPepperFace::*)()>(&::GlobalNamespace::HotPepperFace::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x578adcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HotPepperFace::__cordl_internal_get__faceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HotPepperFace::__cordl_internal_get__faceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceMesh;
}
constexpr void GlobalNamespace::HotPepperFace::__cordl_internal_set__faceMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceMesh = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::HotPepperFace::__cordl_internal_get__fireFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::HotPepperFace::__cordl_internal_get__fireFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fireFX;
}
constexpr void GlobalNamespace::HotPepperFace::__cordl_internal_set__fireFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fireFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HotPepperFace::__cordl_internal_get__flameSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flameSpeaker;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HotPepperFace::__cordl_internal_get__flameSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flameSpeaker;
}
constexpr void GlobalNamespace::HotPepperFace::__cordl_internal_set__flameSpeaker(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flameSpeaker = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HotPepperFace::__cordl_internal_get__breathSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breathSpeaker;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HotPepperFace::__cordl_internal_get__breathSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breathSpeaker;
}
constexpr void GlobalNamespace::HotPepperFace::__cordl_internal_set__breathSpeaker(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breathSpeaker = value;
}
constexpr float_t& GlobalNamespace::HotPepperFace::__cordl_internal_get__effectLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectLength;
}
constexpr float_t const& GlobalNamespace::HotPepperFace::__cordl_internal_get__effectLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectLength;
}
constexpr void GlobalNamespace::HotPepperFace::__cordl_internal_set__effectLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____effectLength = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HotPepperFace::__cordl_internal_get__thermalSourceVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thermalSourceVolume;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HotPepperFace::__cordl_internal_get__thermalSourceVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thermalSourceVolume;
}
constexpr void GlobalNamespace::HotPepperFace::__cordl_internal_set__thermalSourceVolume(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thermalSourceVolume = value;
}
inline void GlobalNamespace::HotPepperFace::PlayFX(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {"PlayFX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void GlobalNamespace::HotPepperFace::PlayFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {"PlayFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HotPepperFace::StopFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {"StopFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HotPepperFace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HotPepperFace*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HotPepperFace* GlobalNamespace::HotPepperFace::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HotPepperFace*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HotPepperFace::HotPepperFace()   {
}
