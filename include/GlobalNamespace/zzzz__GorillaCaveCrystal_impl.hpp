#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCaveCrystal.hpp"
#include "GlobalNamespace/zzzz__CrystalNote_impl.hpp"
#include "GlobalNamespace/zzzz__CrystalOctave_impl.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaCaveCrystal_def.hpp"
#include "GlobalNamespace/zzzz__GorillaCaveCrystalVisuals_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__TapInnerGlow_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaCaveCrystal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCaveCrystal::*)()>(&::GlobalNamespace::GorillaCaveCrystal::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5903950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCaveCrystal.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCaveCrystal::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GorillaCaveCrystal::OnTapLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59039f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCaveCrystal.AnimateCrystal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCaveCrystal::*)()>(&::GlobalNamespace::GorillaCaveCrystal::AnimateCrystal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59039fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                        {"AnimateCrystal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaCaveCrystal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaCaveCrystal::*)()>(&::GlobalNamespace::GorillaCaveCrystal::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5903a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_overrideSoundAndMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSoundAndMaterial;
}
constexpr bool const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_overrideSoundAndMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSoundAndMaterial;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set_overrideSoundAndMaterial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideSoundAndMaterial = value;
}
constexpr ::GlobalNamespace::CrystalOctave& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_octave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___octave;
}
constexpr ::GlobalNamespace::CrystalOctave const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_octave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___octave;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set_octave(::GlobalNamespace::CrystalOctave  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___octave = value;
}
constexpr ::GlobalNamespace::CrystalNote& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note;
}
constexpr ::GlobalNamespace::CrystalNote const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set_note(::GlobalNamespace::CrystalNote  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___note = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__crystalRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crystalRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__crystalRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crystalRenderer;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set__crystalRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crystalRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::TapInnerGlow>& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_tapScript()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapScript;
}
constexpr ::UnityW<::GlobalNamespace::TapInnerGlow> const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_tapScript() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapScript;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set_tapScript(::UnityW<::GlobalNamespace::TapInnerGlow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapScript = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals>& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visuals;
}
constexpr ::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals> const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get_visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visuals;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set_visuals(::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visuals = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__lerpInCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpInCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__lerpInCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpInCurve;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set__lerpInCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpInCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__lerpOutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpOutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__lerpOutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lerpOutCurve;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set__lerpOutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lerpOutCurve = value;
}
constexpr bool& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__animating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animating;
}
constexpr bool const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__animating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animating;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set__animating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animating = value;
}
constexpr float_t& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__tapStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapStrength;
}
constexpr float_t const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__tapStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapStrength;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set__tapStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapStrength = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__timeSinceLastTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceLastTap;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::GorillaCaveCrystal::__cordl_internal_get__timeSinceLastTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceLastTap;
}
constexpr void GlobalNamespace::GorillaCaveCrystal::__cordl_internal_set__timeSinceLastTap(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceLastTap = value;
}
inline void GlobalNamespace::GorillaCaveCrystal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCaveCrystal::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GlobalNamespace::GorillaCaveCrystal::AnimateCrystal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                        {"AnimateCrystal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaCaveCrystal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaCaveCrystal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaCaveCrystal* GlobalNamespace::GorillaCaveCrystal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaCaveCrystal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaCaveCrystal::GorillaCaveCrystal()   {
}
