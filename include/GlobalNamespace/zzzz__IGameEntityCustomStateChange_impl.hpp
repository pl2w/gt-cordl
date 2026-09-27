#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityCustomStateChange.hpp"
#include "GlobalNamespace/zzzz__IGameEntityCustomStateChange_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameEntityCustomStateChange.CanChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityCustomStateChange::*)(int64_t, int32_t)>(&::GlobalNamespace::IGameEntityCustomStateChange::CanChangeState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityCustomStateChange*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityCustomStateChange*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IGameEntityCustomStateChange::CanChangeState(int64_t  newState, int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityCustomStateChange*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newState, playerId);
}
