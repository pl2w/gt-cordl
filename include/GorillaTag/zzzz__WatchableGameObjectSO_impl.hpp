#pragma once
// IWYU pragma private; include "GorillaTag/WatchableGameObjectSO.hpp"
#include "GlobalNamespace/zzzz__WatchableGenericSO_1_impl.hpp"
#include "GorillaTag/zzzz__WatchableGameObjectSO_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTag::WatchableGameObjectSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::WatchableGameObjectSO::*)()>(&::GorillaTag::WatchableGameObjectSO::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d27fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::WatchableGameObjectSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::WatchableGameObjectSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::WatchableGameObjectSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::WatchableGameObjectSO* GorillaTag::WatchableGameObjectSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::WatchableGameObjectSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::WatchableGameObjectSO::WatchableGameObjectSO()   {
}
