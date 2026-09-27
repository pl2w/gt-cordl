#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailRendererScalerLocal.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrailRendererScalerLocal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrailRendererScalerLocal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrailRendererScalerLocal::*)()>(&::GlobalNamespace::TrailRendererScalerLocal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b1e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrailRendererScalerLocal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TrailRendererScalerLocal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrailRendererScalerLocal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrailRendererScalerLocal* GlobalNamespace::TrailRendererScalerLocal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrailRendererScalerLocal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailRendererScalerLocal::TrailRendererScalerLocal()   {
}
