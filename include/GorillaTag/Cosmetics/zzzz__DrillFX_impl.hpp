#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DrillFX.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ShapeModule_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__DrillFX_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DrillFX::*)()>(&::GorillaTag::Cosmetics::DrillFX::Awake)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5d7b4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DrillFX::*)()>(&::GorillaTag::Cosmetics::DrillFX::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d7b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DrillFX::*)()>(&::GorillaTag::Cosmetics::DrillFX::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d7b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DrillFX::*)()>(&::GorillaTag::Cosmetics::DrillFX::LateUpdate)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5d7b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX.HandleApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::Cosmetics::DrillFX::HandleApplicationQuitting)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d7bc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX.ValidateLineCastPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::DrillFX::*)()>(&::GorillaTag::Cosmetics::DrillFX::ValidateLineCastPositions)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d7b794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"ValidateLineCastPositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::DrillFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::DrillFX::*)()>(&::GorillaTag::Cosmetics::DrillFX::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d7bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fx;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fx;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fx(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fx = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxEmissionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxEmissionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxEmissionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxEmissionCurve;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fxEmissionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxEmissionCurve = value;
}
constexpr float_t& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxMinRadiusScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxMinRadiusScale;
}
constexpr float_t const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxMinRadiusScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxMinRadiusScale;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fxMinRadiusScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxMinRadiusScale = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_loopAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_loopAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudio;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_loopAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopAudio = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_loopAudioVolumeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudioVolumeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_loopAudioVolumeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudioVolumeCurve;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_loopAudioVolumeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopAudioVolumeCurve = value;
}
constexpr float_t& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_loopAudioVolumeTransitionSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudioVolumeTransitionSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_loopAudioVolumeTransitionSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudioVolumeTransitionSpeed;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_loopAudioVolumeTransitionSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopAudioVolumeTransitionSpeed = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_lineCastLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_lineCastLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastLayerMask;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_lineCastLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineCastLayerMask = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_lineCastStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastStart;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_lineCastStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastStart;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_lineCastStart(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineCastStart = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_lineCastEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastEnd;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_lineCastEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineCastEnd;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_lineCastEnd(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineCastEnd = value;
}
constexpr float_t& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr float_t const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_maxDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDepth = value;
}
constexpr bool& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_hasFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFX;
}
constexpr bool const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_hasFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFX;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_hasFX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasFX = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxEmissionModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxEmissionModule;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxEmissionModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxEmissionModule;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fxEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxEmissionModule = value;
}
constexpr float_t& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxEmissionMaxRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxEmissionMaxRate;
}
constexpr float_t const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxEmissionMaxRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxEmissionMaxRate;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fxEmissionMaxRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxEmissionMaxRate = value;
}
constexpr ::GlobalNamespace::ParticleSystem_ShapeModule& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxShapeModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxShapeModule;
}
constexpr ::GlobalNamespace::ParticleSystem_ShapeModule const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxShapeModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxShapeModule;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fxShapeModule(::GlobalNamespace::ParticleSystem_ShapeModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxShapeModule = value;
}
constexpr float_t& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxShapeMaxRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxShapeMaxRadius;
}
constexpr float_t const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_fxShapeMaxRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxShapeMaxRadius;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_fxShapeMaxRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxShapeMaxRadius = value;
}
constexpr bool& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_hasAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasAudio;
}
constexpr bool const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_hasAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasAudio;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_hasAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasAudio = value;
}
constexpr float_t& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_audioMaxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioMaxVolume;
}
constexpr float_t const& GorillaTag::Cosmetics::DrillFX::__cordl_internal_get_audioMaxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioMaxVolume;
}
constexpr void GorillaTag::Cosmetics::DrillFX::__cordl_internal_set_audioMaxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioMaxVolume = value;
}
inline void GorillaTag::Cosmetics::DrillFX::setStaticF_appIsQuitting(bool  value)  {
::cordl_internals::setStaticField<bool, "appIsQuitting", ::GorillaTag::Cosmetics::DrillFX*>(std::forward<bool>(value));
}
inline bool GorillaTag::Cosmetics::DrillFX::getStaticF_appIsQuitting()  {
return ::cordl_internals::getStaticField<bool, "appIsQuitting", ::GorillaTag::Cosmetics::DrillFX*>();
}
inline void GorillaTag::Cosmetics::DrillFX::setStaticF_appIsQuittingHandlerIsSubscribed(bool  value)  {
::cordl_internals::setStaticField<bool, "appIsQuittingHandlerIsSubscribed", ::GorillaTag::Cosmetics::DrillFX*>(std::forward<bool>(value));
}
inline bool GorillaTag::Cosmetics::DrillFX::getStaticF_appIsQuittingHandlerIsSubscribed()  {
return ::cordl_internals::getStaticField<bool, "appIsQuittingHandlerIsSubscribed", ::GorillaTag::Cosmetics::DrillFX*>();
}
inline void GorillaTag::Cosmetics::DrillFX::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DrillFX::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DrillFX::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DrillFX::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DrillFX::HandleApplicationQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaTag::Cosmetics::DrillFX::ValidateLineCastPositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {"ValidateLineCastPositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::DrillFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::DrillFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::DrillFX* GorillaTag::Cosmetics::DrillFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::DrillFX*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::DrillFX::DrillFX()   {
}
