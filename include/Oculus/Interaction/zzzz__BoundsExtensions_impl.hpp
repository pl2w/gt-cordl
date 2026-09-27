#pragma once
// IWYU pragma private; include "Oculus/Interaction/BoundsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__BoundsExtensions_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::BoundsExtensions.Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bounds>)>(&::Oculus::Interaction::BoundsExtensions::Clip)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa48aee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BoundsExtensions*>(),
                        {"Clip", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::BoundsExtensions::Clip(::UnityEngine::Bounds  bounds, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  clipper, ::by_ref<::UnityEngine::Bounds>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::BoundsExtensions*>(),
                        {"Clip", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, clipper, result);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::BoundsExtensions::BoundsExtensions()   {
}
