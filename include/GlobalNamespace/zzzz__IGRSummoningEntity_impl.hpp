#pragma once
// IWYU pragma private; include "GlobalNamespace/IGRSummoningEntity.hpp"
#include "GlobalNamespace/zzzz__IGRSummoningEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGRSummoningEntity.OnSummonedEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGRSummoningEntity::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::IGRSummoningEntity::OnSummonedEntityInit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSummoningEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSummoningEntity*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGRSummoningEntity.OnSummonedEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGRSummoningEntity::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::IGRSummoningEntity::OnSummonedEntityDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGRSummoningEntity*>(),
                    {::i2c::class_of<::GlobalNamespace::IGRSummoningEntity*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGRSummoningEntity::OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSummoningEntity*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::IGRSummoningEntity::OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGRSummoningEntity*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
