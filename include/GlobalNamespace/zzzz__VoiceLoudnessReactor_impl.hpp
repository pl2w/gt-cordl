#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactor.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorAnimatorTarget_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorBlendShapeTarget_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorGameObjectEnableTarget_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorParticleSystemTarget_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorRendererColorTarget_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorTransformRotationTarget_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorTransformTarget_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSpeakerLoudness_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor::*)()>(&::GlobalNamespace::VoiceLoudnessReactor::Start)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5b3ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor::*)()>(&::GlobalNamespace::VoiceLoudnessReactor::OnEnable)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b4039c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor::*)()>(&::GlobalNamespace::VoiceLoudnessReactor::Update)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x5b40530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor::*)()>(&::GlobalNamespace::VoiceLoudnessReactor::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b40d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_loudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_loudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_loudness(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loudness = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_blendShapeTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_blendShapeTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_blendShapeTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_transformPositionTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformPositionTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_transformPositionTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformPositionTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_transformPositionTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformPositionTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_transformRotationTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformRotationTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_transformRotationTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformRotationTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_transformRotationTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformRotationTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_transformScaleTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformScaleTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_transformScaleTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformScaleTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_transformScaleTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformScaleTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_particleTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_particleTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_particleTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_gameObjectEnableTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectEnableTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_gameObjectEnableTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectEnableTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_gameObjectEnableTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjectEnableTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_rendererColorTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererColorTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_rendererColorTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererColorTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_rendererColorTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rendererColorTargets = value;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_animatorTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorTargets;
}
constexpr ::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*> const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_animatorTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorTargets;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_animatorTargets(::ArrayW<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatorTargets = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_smoothLoudnessForContinuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothLoudnessForContinuousProperties;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_smoothLoudnessForContinuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothLoudnessForContinuousProperties;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_smoothLoudnessForContinuousProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothLoudnessForContinuousProperties = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_hasContinuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasContinuousProperties;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_hasContinuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasContinuousProperties;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_hasContinuousProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasContinuousProperties = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_frameLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameLoudness;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_frameLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_frameLoudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameLoudness = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_frameSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSmoothedLoudness;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_frameSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_frameSmoothedLoudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameSmoothedLoudness = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attack;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attack;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_attack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attack = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_decay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decay;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_get_decay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decay;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor::__cordl_internal_set_decay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decay = value;
}
inline void GlobalNamespace::VoiceLoudnessReactor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactor* GlobalNamespace::VoiceLoudnessReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactor::VoiceLoudnessReactor()   {
}
