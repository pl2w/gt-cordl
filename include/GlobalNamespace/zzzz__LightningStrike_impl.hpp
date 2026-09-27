#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningStrike.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ShapeModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TrailModule_impl.hpp"
#include "GlobalNamespace/zzzz__LightningStrike_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightningStrike.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningStrike::*)()>(&::GlobalNamespace::LightningStrike::Initialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b2edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningStrike*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningStrike.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningStrike::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, ::UnityEngine::Gradient*)>(&::GlobalNamespace::LightningStrike::Play)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5b2e634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningStrike*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightningStrike._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningStrike::*)()>(&::GlobalNamespace::LightningStrike::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningStrike*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::LightningStrike::__cordl_internal_get_ps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::LightningStrike::__cordl_internal_get_ps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps;
}
constexpr void GlobalNamespace::LightningStrike::__cordl_internal_set_ps(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule& GlobalNamespace::LightningStrike::__cordl_internal_get_psMain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psMain;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule const& GlobalNamespace::LightningStrike::__cordl_internal_get_psMain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psMain;
}
constexpr void GlobalNamespace::LightningStrike::__cordl_internal_set_psMain(::GlobalNamespace::ParticleSystem_MainModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___psMain = value;
}
constexpr ::GlobalNamespace::ParticleSystem_ShapeModule& GlobalNamespace::LightningStrike::__cordl_internal_get_psShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psShape;
}
constexpr ::GlobalNamespace::ParticleSystem_ShapeModule const& GlobalNamespace::LightningStrike::__cordl_internal_get_psShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psShape;
}
constexpr void GlobalNamespace::LightningStrike::__cordl_internal_set_psShape(::GlobalNamespace::ParticleSystem_ShapeModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___psShape = value;
}
constexpr ::GlobalNamespace::ParticleSystem_TrailModule& GlobalNamespace::LightningStrike::__cordl_internal_get_psTrails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psTrails;
}
constexpr ::GlobalNamespace::ParticleSystem_TrailModule const& GlobalNamespace::LightningStrike::__cordl_internal_get_psTrails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psTrails;
}
constexpr void GlobalNamespace::LightningStrike::__cordl_internal_set_psTrails(::GlobalNamespace::ParticleSystem_TrailModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___psTrails = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::LightningStrike::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::LightningStrike::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::LightningStrike::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
inline void GlobalNamespace::LightningStrike::setStaticF_rand(::GlobalNamespace::SRand  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::LightningStrike*>(std::forward<::GlobalNamespace::SRand>(value));
}
inline ::GlobalNamespace::SRand GlobalNamespace::LightningStrike::getStaticF_rand()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SRand, "rand", ::GlobalNamespace::LightningStrike*>();
}
inline void GlobalNamespace::LightningStrike::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningStrike*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightningStrike::Play(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, float_t  beamWidthMultiplier, float_t  audioVolume, float_t  duration, ::UnityEngine::Gradient*  colorOverLifetime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningStrike*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, beamWidthMultiplier, audioVolume, duration, colorOverLifetime);
}
inline void GlobalNamespace::LightningStrike::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningStrike*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightningStrike* GlobalNamespace::LightningStrike::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningStrike*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningStrike::LightningStrike()   {
}
