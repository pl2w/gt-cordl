#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterShadeFleeing.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterShadeFleeing_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterShadeFleeing_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeFleeing.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeFleeing::*)()>(&::GlobalNamespace::CosmeticCritterShadeFleeing::OnSpawn)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57f3444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeFleeing.SetFleePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeFleeing::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CosmeticCritterShadeFleeing::SetFleePosition)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x57f30e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                        {"SetFleePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeFleeing.SetRandomVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeFleeing::*)()>(&::GlobalNamespace::CosmeticCritterShadeFleeing::SetRandomVariables)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x57f3538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeFleeing.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeFleeing::*)()>(&::GlobalNamespace::CosmeticCritterShadeFleeing::Tick)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x57f3698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeFleeing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeFleeing::*)()>(&::GlobalNamespace::CosmeticCritterShadeFleeing::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57f3934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_modelSwaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelSwaps;
}
constexpr ::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*> const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_modelSwaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelSwaps;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_modelSwaps(::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelSwaps = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeDistanceToDespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeDistanceToDespawn;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeDistanceToDespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeDistanceToDespawn;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeDistanceToDespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeDistanceToDespawn = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeSpeed;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeSpeed = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobMagnitudeXYMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobMagnitudeXYMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobMagnitudeXYMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobMagnitudeXYMax;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeBobMagnitudeXYMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeBobMagnitudeXYMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobFrequencyXYMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobFrequencyXYMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobFrequencyXYMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobFrequencyXYMax;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeBobFrequencyXYMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeBobFrequencyXYMax = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_spawnFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_spawnFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnFX;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_spawnFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_spawnAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_spawnAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAudioSource;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_spawnAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAudioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_spawnAudioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_spawnAudioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAudioClips;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_spawnAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAudioClips = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_pullVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_pullVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullVector;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_pullVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullVector = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___origin;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_origin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___origin = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeForward;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeForward;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeForward(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeForward = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeRight;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeRight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeUp;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeUp;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeUp(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeUp = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobFrequencyXY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobFrequencyXY;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobFrequencyXY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobFrequencyXY;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeBobFrequencyXY(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeBobFrequencyXY = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobMagnitudeXY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobMagnitudeXY;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_fleeBobMagnitudeXY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fleeBobMagnitudeXY;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_fleeBobMagnitudeXY(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fleeBobMagnitudeXY = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_trailingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailingPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_trailingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailingPosition;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_trailingPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailingPosition = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_closestCatcherDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestCatcherDistance;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_closestCatcherDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closestCatcherDistance;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_closestCatcherDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closestCatcherDistance = value;
}
constexpr int32_t& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_animatorProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorProperty;
}
constexpr int32_t const& GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_get_animatorProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorProperty;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing::__cordl_internal_set_animatorProperty(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatorProperty = value;
}
inline void GlobalNamespace::CosmeticCritterShadeFleeing::OnSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterShadeFleeing::SetFleePosition(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  fleeFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                        {"SetFleePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, fleeFrom);
}
inline void GlobalNamespace::CosmeticCritterShadeFleeing::SetRandomVariables()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterShadeFleeing::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterShadeFleeing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterShadeFleeing* GlobalNamespace::CosmeticCritterShadeFleeing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterShadeFleeing*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterShadeFleeing::CosmeticCritterShadeFleeing()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::*)()>(&::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f39d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::__cordl_internal_get_relativeProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeProbability;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::__cordl_internal_get_relativeProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeProbability;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::__cordl_internal_set_relativeProbability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relativeProbability = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
inline void GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap* GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap::CosmeticCritterShadeFleeing_ModelSwap()   {
}
