#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodGroupExcluder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__StaticLodGroupExcluder_def.hpp"
//  Writing Method size for method: ::GorillaTag::StaticLodGroupExcluder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodGroupExcluder::*)()>(&::GorillaTag::StaticLodGroupExcluder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d24cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroupExcluder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::StaticLodGroupExcluder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroupExcluder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::StaticLodGroupExcluder* GorillaTag::StaticLodGroupExcluder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::StaticLodGroupExcluder*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::StaticLodGroupExcluder::StaticLodGroupExcluder()   {
}
