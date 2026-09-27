#pragma once
// IWYU pragma private; include "Fusion/FusionMonoBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/zzzz__FusionMonoBehaviour_def.hpp"
//  Writing Method size for method: ::Fusion::FusionMonoBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionMonoBehaviour::*)()>(&::Fusion::FusionMonoBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionMonoBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionMonoBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionMonoBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionMonoBehaviour* Fusion::FusionMonoBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionMonoBehaviour*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionMonoBehaviour::FusionMonoBehaviour()   {
}
