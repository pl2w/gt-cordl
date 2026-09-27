#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/EndCapSpawnPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__EndCapSpawnPoint_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::EndCapSpawnPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::EndCapSpawnPoint::*)()>(&::GorillaNetworking::Store::EndCapSpawnPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca8310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::EndCapSpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::Store::EndCapSpawnPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::EndCapSpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::EndCapSpawnPoint* GorillaNetworking::Store::EndCapSpawnPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::EndCapSpawnPoint*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::EndCapSpawnPoint::EndCapSpawnPoint()   {
}
