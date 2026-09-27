#pragma once
// IWYU pragma private; include "UnityEngine/U2D/PixelPerfectRendering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__PixelPerfectRendering_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::PixelPerfectRendering.set_pixelSnapSpacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::U2D::PixelPerfectRendering::set_pixelSnapSpacing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb62ff3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::U2D::PixelPerfectRendering*>(),
                        {"set_pixelSnapSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::U2D::PixelPerfectRendering::set_pixelSnapSpacing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::U2D::PixelPerfectRendering*>(),
                        {"set_pixelSnapSpacing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::PixelPerfectRendering::PixelPerfectRendering()   {
}
