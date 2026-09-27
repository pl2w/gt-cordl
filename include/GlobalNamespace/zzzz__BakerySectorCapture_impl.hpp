#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySectorCapture.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BakerySectorCapture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakerySectorCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakerySectorCapture::*)()>(&::GlobalNamespace::BakerySectorCapture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f27bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySectorCapture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakerySectorCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakerySectorCapture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakerySectorCapture* GlobalNamespace::BakerySectorCapture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakerySectorCapture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakerySectorCapture::BakerySectorCapture()   {
}
