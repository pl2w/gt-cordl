#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterCatcherButterflyNet.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcher_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcherButterflyNet_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterAction_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherButterflyNet.GetLocalCatchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticCritterAction (::GlobalNamespace::CosmeticCritterCatcherButterflyNet::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterCatcherButterflyNet::GetLocalCatchAction)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x57f1a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherButterflyNet.ValidateRemoteCatchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterCatcherButterflyNet::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::CosmeticCritterAction, double_t)>(&::GlobalNamespace::CosmeticCritterCatcherButterflyNet::ValidateRemoteCatchAction)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x57f1b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherButterflyNet.OnCatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherButterflyNet::*)(::GlobalNamespace::CosmeticCritter*, ::GlobalNamespace::CosmeticCritterAction, double_t)>(&::GlobalNamespace::CosmeticCritterCatcherButterflyNet::OnCatch)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x57f1cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterCatcherButterflyNet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterCatcherButterflyNet::*)()>(&::GlobalNamespace::CosmeticCritterCatcherButterflyNet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f1d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_maxCatchRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCatchRadius;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_maxCatchRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCatchRadius;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_set_maxCatchRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCatchRadius = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_minCatchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCatchSpeed;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_minCatchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCatchSpeed;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_set_minCatchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minCatchSpeed = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_caughtButterflyParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caughtButterflyParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_caughtButterflyParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caughtButterflyParticleSystem;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_set_caughtButterflyParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___caughtButterflyParticleSystem = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_catchFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_catchFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchFX;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_set_catchFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchFX = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_catchSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSFX;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_get_catchSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSFX;
}
constexpr void GlobalNamespace::CosmeticCritterCatcherButterflyNet::__cordl_internal_set_catchSFX(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSFX = value;
}
inline ::GlobalNamespace::CosmeticCritterAction GlobalNamespace::CosmeticCritterCatcherButterflyNet::GetLocalCatchAction(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticCritterAction>(this, ___internal_method, critter);
}
inline bool GlobalNamespace::CosmeticCritterCatcherButterflyNet::ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, critter, catchAction, serverTime);
}
inline void GlobalNamespace::CosmeticCritterCatcherButterflyNet::OnCatch(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter, catchAction, serverTime);
}
inline void GlobalNamespace::CosmeticCritterCatcherButterflyNet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterCatcherButterflyNet* GlobalNamespace::CosmeticCritterCatcherButterflyNet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterCatcherButterflyNet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterCatcherButterflyNet::CosmeticCritterCatcherButterflyNet()   {
}
