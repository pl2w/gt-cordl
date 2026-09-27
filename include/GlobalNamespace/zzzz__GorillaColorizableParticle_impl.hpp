#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColorizableParticle.hpp"
#include "GlobalNamespace/zzzz__GorillaColorizableBase_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaColorizableParticle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaColorizableParticle.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorizableParticle::*)(::UnityEngine::Color)>(&::GlobalNamespace::GorillaColorizableParticle::SetColor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5904214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaColorizableParticle*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaColorizableParticle*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaColorizableParticle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorizableParticle::*)()>(&::GlobalNamespace::GorillaColorizableParticle::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5904380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorizableParticle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GorillaColorizableParticle::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GorillaColorizableParticle::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void GlobalNamespace::GorillaColorizableParticle::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr float_t& GlobalNamespace::GorillaColorizableParticle::__cordl_internal_get_gradientColorPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradientColorPower;
}
constexpr float_t const& GlobalNamespace::GorillaColorizableParticle::__cordl_internal_get_gradientColorPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gradientColorPower;
}
constexpr void GlobalNamespace::GorillaColorizableParticle::__cordl_internal_set_gradientColorPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gradientColorPower = value;
}
constexpr bool& GlobalNamespace::GorillaColorizableParticle::__cordl_internal_get_useLinearColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLinearColor;
}
constexpr bool const& GlobalNamespace::GorillaColorizableParticle::__cordl_internal_get_useLinearColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLinearColor;
}
constexpr void GlobalNamespace::GorillaColorizableParticle::__cordl_internal_set_useLinearColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useLinearColor = value;
}
inline void GlobalNamespace::GorillaColorizableParticle::SetColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaColorizableParticle*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::GorillaColorizableParticle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorizableParticle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaColorizableParticle* GlobalNamespace::GorillaColorizableParticle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaColorizableParticle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaColorizableParticle::GorillaColorizableParticle()   {
}
