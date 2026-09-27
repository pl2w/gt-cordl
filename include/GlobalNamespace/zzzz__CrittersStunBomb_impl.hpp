#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersStunBomb.hpp"
#include "GlobalNamespace/zzzz__CrittersToolThrowable_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersStunBomb_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersStunBomb.OnImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersStunBomb::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersStunBomb::OnImpact)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x56f5050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersStunBomb.OnImpactCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersStunBomb::*)(::GlobalNamespace::CrittersPawn*)>(&::GlobalNamespace::CrittersStunBomb::OnImpactCritter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56f52d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersStunBomb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersStunBomb::*)()>(&::GlobalNamespace::CrittersStunBomb::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56f536c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrittersStunBomb::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::CrittersStunBomb::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::CrittersStunBomb::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& GlobalNamespace::CrittersStunBomb::__cordl_internal_get_stunDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunDuration;
}
constexpr float_t const& GlobalNamespace::CrittersStunBomb::__cordl_internal_get_stunDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunDuration;
}
constexpr void GlobalNamespace::CrittersStunBomb::__cordl_internal_set_stunDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunDuration = value;
}
inline void GlobalNamespace::CrittersStunBomb::OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitPosition, hitNormal);
}
inline void GlobalNamespace::CrittersStunBomb::OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, impactedCritter);
}
inline void GlobalNamespace::CrittersStunBomb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersStunBomb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersStunBomb* GlobalNamespace::CrittersStunBomb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersStunBomb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersStunBomb::CrittersStunBomb()   {
}
