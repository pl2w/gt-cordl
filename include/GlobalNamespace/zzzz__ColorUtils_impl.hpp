#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorUtils_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorUtils.WithAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorUtils::WithAlpha)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ae4524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"WithAlpha", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorUtils.WithAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32, uint8_t)>(&::GlobalNamespace::ColorUtils::WithAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae45e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"WithAlpha", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorUtils.ComposeHDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::ColorUtils::ComposeHDR)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ae45ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"ComposeHDR", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorUtils.DecomposeHDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Color,float_t> (*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorUtils::DecomposeHDR)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x5ae46b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"DecomposeHDR", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color GlobalNamespace::ColorUtils::WithAlpha(::UnityEngine::Color  c, float_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"WithAlpha", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c, alpha);
}
inline ::UnityEngine::Color32 GlobalNamespace::ColorUtils::WithAlpha(::UnityEngine::Color32  c, uint8_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"WithAlpha", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c, alpha);
}
inline ::UnityEngine::Color GlobalNamespace::ColorUtils::ComposeHDR(::UnityEngine::Color  baseColor, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"ComposeHDR", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, baseColor, intensity);
}
inline ::System::ValueTuple_2<::UnityEngine::Color,float_t> GlobalNamespace::ColorUtils::DecomposeHDR(::UnityEngine::Color  hdrColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColorUtils*>(),
                        {"DecomposeHDR", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Color,float_t>>(nullptr, ___internal_method, hdrColor);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorUtils::ColorUtils()   {
}
