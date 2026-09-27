#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetProjectileStretchVisuals.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileStretchVisuals_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetProjectileStretchVisuals.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetProjectileStretchVisuals::*)()>(&::GlobalNamespace::SIGadgetProjectileStretchVisuals::OnEnable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x57fcc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetProjectileStretchVisuals.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetProjectileStretchVisuals::*)()>(&::GlobalNamespace::SIGadgetProjectileStretchVisuals::Tick)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57fce5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetProjectileStretchVisuals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetProjectileStretchVisuals::*)()>(&::GlobalNamespace::SIGadgetProjectileStretchVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57fcf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_projectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_projectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectile = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_baseVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVisuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_baseVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseVisuals;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_baseVisuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseVisuals = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_frontStretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontStretch;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_frontStretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontStretch;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_frontStretch(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontStretch = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_rearStretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rearStretch;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_rearStretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rearStretch;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_rearStretch(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rearStretch = value;
}
constexpr float_t& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_framesPerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesPerPosition;
}
constexpr float_t const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_framesPerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framesPerPosition;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_framesPerPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framesPerPosition = value;
}
constexpr float_t& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_totalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr float_t const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_totalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_totalLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalLength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_distancePerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distancePerFrame;
}
constexpr float_t const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_distancePerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distancePerFrame;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_distancePerFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distancePerFrame = value;
}
constexpr float_t& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_maxStretchRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStretchRatio;
}
constexpr float_t const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_maxStretchRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStretchRatio;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_maxStretchRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxStretchRatio = value;
}
constexpr bool& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_maxSizeReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSizeReached;
}
constexpr bool const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_maxSizeReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSizeReached;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_maxSizeReached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSizeReached = value;
}
constexpr float_t& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_frontDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontDistance;
}
constexpr float_t const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_frontDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frontDistance;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_frontDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frontDistance = value;
}
constexpr float_t& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_timeSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSpawned;
}
constexpr float_t const& GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_get_timeSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSpawned;
}
constexpr void GlobalNamespace::SIGadgetProjectileStretchVisuals::__cordl_internal_set_timeSpawned(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSpawned = value;
}
inline void GlobalNamespace::SIGadgetProjectileStretchVisuals::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetProjectileStretchVisuals::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetProjectileStretchVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetProjectileStretchVisuals* GlobalNamespace::SIGadgetProjectileStretchVisuals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetProjectileStretchVisuals*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetProjectileStretchVisuals::SIGadgetProjectileStretchVisuals()   {
}
