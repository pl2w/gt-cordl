#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterPumpableProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIBlasterPumpableProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileModifier_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIBlasterPumpableProjectile.ModifyProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterPumpableProjectile::*)(::GlobalNamespace::SIGadgetBlasterProjectile*)>(&::GlobalNamespace::SIBlasterPumpableProjectile::ModifyProjectile)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x57f7070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterPumpableProjectile*>(),
                        {"ModifyProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIBlasterPumpableProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIBlasterPumpableProjectile::*)()>(&::GlobalNamespace::SIBlasterPumpableProjectile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f727c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterPumpableProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_maxPump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPump;
}
constexpr float_t const& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_maxPump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPump;
}
constexpr void GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_set_maxPump(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPump = value;
}
constexpr float_t& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_pumpChargedAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpChargedAmount;
}
constexpr float_t const& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_pumpChargedAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpChargedAmount;
}
constexpr void GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_set_pumpChargedAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpChargedAmount = value;
}
constexpr float_t& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_velocityPerPumpCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityPerPumpCharge;
}
constexpr float_t const& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_velocityPerPumpCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityPerPumpCharge;
}
constexpr void GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_set_velocityPerPumpCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityPerPumpCharge = value;
}
constexpr float_t& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_strengthPerPumpCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strengthPerPumpCharge;
}
constexpr float_t const& GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_get_strengthPerPumpCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strengthPerPumpCharge;
}
constexpr void GlobalNamespace::SIBlasterPumpableProjectile::__cordl_internal_set_strengthPerPumpCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strengthPerPumpCharge = value;
}
inline void GlobalNamespace::SIBlasterPumpableProjectile::ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterPumpableProjectile*>(),
                        {"ModifyProjectile", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetBlasterProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GlobalNamespace::SIBlasterPumpableProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIBlasterPumpableProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIBlasterPumpableProjectile* GlobalNamespace::SIBlasterPumpableProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIBlasterPumpableProjectile*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr  GlobalNamespace::SIBlasterPumpableProjectile::operator ::GlobalNamespace::SIGadgetProjectileModifier*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileModifier"
constexpr ::GlobalNamespace::SIGadgetProjectileModifier* GlobalNamespace::SIBlasterPumpableProjectile::i___GlobalNamespace__SIGadgetProjectileModifier() noexcept {
return static_cast<::GlobalNamespace::SIGadgetProjectileModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIBlasterPumpableProjectile::SIBlasterPumpableProjectile()   {
}
