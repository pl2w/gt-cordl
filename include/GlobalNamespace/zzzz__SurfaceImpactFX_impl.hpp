#pragma once
// IWYU pragma private; include "GlobalNamespace/SurfaceImpactFX.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SurfaceImpactFX_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SurfaceImpactFX.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SurfaceImpactFX::*)()>(&::GlobalNamespace::SurfaceImpactFX::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b23d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceImpactFX*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SurfaceImpactFX.SetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SurfaceImpactFX::*)(float_t)>(&::GlobalNamespace::SurfaceImpactFX::SetScale)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b23ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceImpactFX*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SurfaceImpactFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SurfaceImpactFX::*)()>(&::GlobalNamespace::SurfaceImpactFX::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b23f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceImpactFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_particleFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_particleFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleFX;
}
constexpr void GlobalNamespace::SurfaceImpactFX::__cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleFX = value;
}
constexpr float_t& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_startingGravityModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingGravityModifier;
}
constexpr float_t const& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_startingGravityModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingGravityModifier;
}
constexpr void GlobalNamespace::SurfaceImpactFX::__cordl_internal_set_startingGravityModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingGravityModifier = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_startingScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_startingScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingScale;
}
constexpr void GlobalNamespace::SurfaceImpactFX::__cordl_internal_set_startingScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingScale = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_fxMainModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxMainModule;
}
constexpr ::GlobalNamespace::ParticleSystem_MainModule const& GlobalNamespace::SurfaceImpactFX::__cordl_internal_get_fxMainModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxMainModule;
}
constexpr void GlobalNamespace::SurfaceImpactFX::__cordl_internal_set_fxMainModule(::GlobalNamespace::ParticleSystem_MainModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxMainModule = value;
}
inline void GlobalNamespace::SurfaceImpactFX::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceImpactFX*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SurfaceImpactFX::SetScale(float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceImpactFX*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline void GlobalNamespace::SurfaceImpactFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceImpactFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SurfaceImpactFX* GlobalNamespace::SurfaceImpactFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SurfaceImpactFX*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SurfaceImpactFX::SurfaceImpactFX()   {
}
