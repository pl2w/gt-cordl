#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BoundsExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BoundsExtension_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BoundsExtension.ContainBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Bounds)>(&::Fusion::LagCompensation::BoundsExtension::ContainBounds)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x600e8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoundsExtension*>(),
                        {"ContainBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::LagCompensation::BoundsExtension::ContainBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Bounds  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoundsExtension*>(),
                        {"ContainBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, target);
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BoundsExtension::BoundsExtension()   {
}
