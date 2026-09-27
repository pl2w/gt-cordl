#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterRandomAngularVelocity.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIBlasterRandomAngularVelocity_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileModifier_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIBlasterRandomAngularVelocity.ModifyProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterRandomAngularVelocity::*)(::GlobalNamespace::SIGadgetBlasterProjectile*)>(&::GlobalNamespace::SIBlasterRandomAngularVelocity::ModifyProjectile)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57f7284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterRandomAngularVelocity*>(),
                        {"ModifyProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterRandomAngularVelocity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterRandomAngularVelocity::*)()>(&::GlobalNamespace::SIBlasterRandomAngularVelocity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f7308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterRandomAngularVelocity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SIBlasterRandomAngularVelocity::__cordl_internal_get_maxVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVel;
}
constexpr float_t const& GlobalNamespace::SIBlasterRandomAngularVelocity::__cordl_internal_get_maxVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVel;
}
constexpr void GlobalNamespace::SIBlasterRandomAngularVelocity::__cordl_internal_set_maxVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVel = value;
}
inline void GlobalNamespace::SIBlasterRandomAngularVelocity::ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterRandomAngularVelocity*>(),
                        {"ModifyProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GlobalNamespace::SIBlasterRandomAngularVelocity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterRandomAngularVelocity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIBlasterRandomAngularVelocity* GlobalNamespace::SIBlasterRandomAngularVelocity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIBlasterRandomAngularVelocity*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr  GlobalNamespace::SIBlasterRandomAngularVelocity::operator ::GlobalNamespace::SIGadgetProjectileModifier*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr ::GlobalNamespace::SIGadgetProjectileModifier* GlobalNamespace::SIBlasterRandomAngularVelocity::i___GlobalNamespace__SIGadgetProjectileModifier() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIBlasterRandomAngularVelocity::SIBlasterRandomAngularVelocity()   {
}
