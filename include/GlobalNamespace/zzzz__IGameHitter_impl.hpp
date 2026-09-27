#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameHitter.hpp"
#include "GlobalNamespace/zzzz__IGameHitter_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameHitter.OnSuccessfulHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameHitter::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::IGameHitter::OnSuccessfulHit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameHitter*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameHitter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameHitter.OnSuccessfulHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameHitter::*)(::GlobalNamespace::GRPlayer*, ::UnityEngine::Vector3)>(&::GlobalNamespace::IGameHitter::OnSuccessfulHitPlayer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5833d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameHitter*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameHitter*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameHitter::OnSuccessfulHit(::GlobalNamespace::GameHitData  hit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameHitter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::IGameHitter::OnSuccessfulHitPlayer(::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameHitter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, hitPosition);
}
