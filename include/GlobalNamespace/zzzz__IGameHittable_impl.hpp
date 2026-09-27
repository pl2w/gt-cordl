#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameHittable.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameHittable.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameHittable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::IGameHittable::IsHitValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameHittable*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameHittable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameHittable.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameHittable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::IGameHittable::OnHit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameHittable*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameHittable*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IGameHittable::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameHittable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::IGameHittable::OnHit(::GlobalNamespace::GameHitData  hit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameHittable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
