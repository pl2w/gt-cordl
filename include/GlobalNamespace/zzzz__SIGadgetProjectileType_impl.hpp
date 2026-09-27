#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetProjectileType.hpp"
#include "GlobalNamespace/zzzz__SIGadgetProjectileType_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetProjectileType.LocalProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetProjectileType::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIGadgetProjectileType::LocalProjectileHit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetProjectileType*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetProjectileType.NetworkedProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetProjectileType::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetProjectileType::NetworkedProjectileHit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetProjectileType*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetProjectileType*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIGadgetProjectileType::LocalProjectileHit(::GlobalNamespace::SIPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetProjectileType*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIGadgetProjectileType::NetworkedProjectileHit(::ArrayW<::System::Object*>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetProjectileType*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
