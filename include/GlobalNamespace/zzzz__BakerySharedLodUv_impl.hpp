#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySharedLodUv.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakerySharedLodUv_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakerySharedLodUv._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakerySharedLodUv::*)()>(&::GlobalNamespace::BakerySharedLodUv::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f27c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySharedLodUv*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakerySharedLodUv::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySharedLodUv*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakerySharedLodUv* GlobalNamespace::BakerySharedLodUv::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakerySharedLodUv*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakerySharedLodUv::BakerySharedLodUv()   {
}
