#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterRippleEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WaterRippleEffect_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaterRippleEffect.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterRippleEffect::*)()>(&::GlobalNamespace::WaterRippleEffect::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56b5da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterRippleEffect.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterRippleEffect::*)()>(&::GlobalNamespace::WaterRippleEffect::Destroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56b5e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterRippleEffect.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterRippleEffect::*)(::GorillaLocomotion::Swimming::WaterVolume*)>(&::GlobalNamespace::WaterRippleEffect::PlayEffect)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x56b5ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterRippleEffect.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterRippleEffect::*)()>(&::GlobalNamespace::WaterRippleEffect::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x56b6000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterRippleEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterRippleEffect::*)()>(&::GlobalNamespace::WaterRippleEffect::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x56b6280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_ripplePlaybackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ripplePlaybackSpeed;
}
constexpr float_t const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_ripplePlaybackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ripplePlaybackSpeed;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_ripplePlaybackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ripplePlaybackSpeed = value;
}
constexpr float_t& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_fadeOutDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutDelay;
}
constexpr float_t const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_fadeOutDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutDelay;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_fadeOutDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutDelay = value;
}
constexpr float_t& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_fadeOutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutTime;
}
constexpr float_t const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_fadeOutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutTime;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_fadeOutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutTime = value;
}
constexpr ::StringW& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_ripplePlaybackSpeedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ripplePlaybackSpeedName;
}
constexpr ::StringW const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_ripplePlaybackSpeedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ripplePlaybackSpeedName;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_ripplePlaybackSpeedName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ripplePlaybackSpeedName = value;
}
constexpr int32_t& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_ripplePlaybackSpeedHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ripplePlaybackSpeedHash;
}
constexpr int32_t const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_ripplePlaybackSpeedHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ripplePlaybackSpeedHash;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_ripplePlaybackSpeedHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ripplePlaybackSpeedHash = value;
}
constexpr float_t& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_rippleStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleStartTime;
}
constexpr float_t const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_rippleStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rippleStartTime;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_rippleStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rippleStartTime = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_renderer(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_waterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GlobalNamespace::WaterRippleEffect::__cordl_internal_get_waterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr void GlobalNamespace::WaterRippleEffect::__cordl_internal_set_waterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterVolume = value;
}
inline void GlobalNamespace::WaterRippleEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterRippleEffect::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterRippleEffect::PlayEffect(::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"PlayEffect", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void GlobalNamespace::WaterRippleEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterRippleEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterRippleEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterRippleEffect* GlobalNamespace::WaterRippleEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaterRippleEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterRippleEffect::WaterRippleEffect()   {
}
