#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleEffect_def.hpp"
#include "GlobalNamespace/zzzz__ParticleEffectsPool_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleEffect.get_effectID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::ParticleEffect::*)()>(&::GlobalNamespace::ParticleEffect::get_effectID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565766c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {"get_effectID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffect.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ParticleEffect::*)()>(&::GlobalNamespace::ParticleEffect::get_isPlaying)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5657674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffect.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffect::*)()>(&::GlobalNamespace::ParticleEffect::Play)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56576f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                    {::i2c::class_of<::GlobalNamespace::ParticleEffect*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffect.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffect::*)()>(&::GlobalNamespace::ParticleEffect::Stop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5657734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                    {::i2c::class_of<::GlobalNamespace::ParticleEffect*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffect.OnParticleSystemStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffect::*)()>(&::GlobalNamespace::ParticleEffect::OnParticleSystemStopped)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5657774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {"OnParticleSystemStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleEffect::*)()>(&::GlobalNamespace::ParticleEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x565788c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ParticleEffect::__cordl_internal_get_system()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___system;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ParticleEffect::__cordl_internal_get_system() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___system;
}
constexpr void GlobalNamespace::ParticleEffect::__cordl_internal_set_system(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___system = value;
}
constexpr int64_t& GlobalNamespace::ParticleEffect::__cordl_internal_get__effectID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectID;
}
constexpr int64_t const& GlobalNamespace::ParticleEffect::__cordl_internal_get__effectID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectID;
}
constexpr void GlobalNamespace::ParticleEffect::__cordl_internal_set__effectID(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____effectID = value;
}
constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool>& GlobalNamespace::ParticleEffect::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::UnityW<::GlobalNamespace::ParticleEffectsPool> const& GlobalNamespace::ParticleEffect::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void GlobalNamespace::ParticleEffect::__cordl_internal_set_pool(::UnityW<::GlobalNamespace::ParticleEffectsPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
constexpr int32_t& GlobalNamespace::ParticleEffect::__cordl_internal_get_poolIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolIndex;
}
constexpr int32_t const& GlobalNamespace::ParticleEffect::__cordl_internal_get_poolIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolIndex;
}
constexpr void GlobalNamespace::ParticleEffect::__cordl_internal_set_poolIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolIndex = value;
}
inline int64_t GlobalNamespace::ParticleEffect::get_effectID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {"get_effectID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::ParticleEffect::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffect::Play()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ParticleEffect*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffect::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ParticleEffect*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffect::OnParticleSystemStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {"OnParticleSystemStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleEffect* GlobalNamespace::ParticleEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleEffect::ParticleEffect()   {
}
