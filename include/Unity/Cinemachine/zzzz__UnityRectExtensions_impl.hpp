#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UnityRectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__UnityRectExtensions_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::UnityRectExtensions.Inflated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Vector2)>(&::Unity::Cinemachine::UnityRectExtensions::Inflated)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaec1a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityRectExtensions*>(),
                        {"Inflated", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rect Unity::Cinemachine::UnityRectExtensions::Inflated(::UnityEngine::Rect  r, ::UnityEngine::Vector2  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::UnityRectExtensions*>(),
                        {"Inflated", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, r, delta);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::UnityRectExtensions::UnityRectExtensions()   {
}
