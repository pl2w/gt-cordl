#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector2Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__Vector2Extensions_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector2Extensions.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Unity::XR::CoreUtils::Vector2Extensions::Inverse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3f2ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"Inverse", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector2Extensions.MinComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2)>(&::Unity::XR::CoreUtils::Vector2Extensions::MinComponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3f2af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"MinComponent", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector2Extensions.MaxComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2)>(&::Unity::XR::CoreUtils::Vector2Extensions::MaxComponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3f2b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"MaxComponent", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector2Extensions.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Unity::XR::CoreUtils::Vector2Extensions::Abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb3f2b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Unity::XR::CoreUtils::Vector2Extensions::Inverse(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"Inverse", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector);
}
inline float_t Unity::XR::CoreUtils::Vector2Extensions::MinComponent(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"MinComponent", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vector);
}
inline float_t Unity::XR::CoreUtils::Vector2Extensions::MaxComponent(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"MaxComponent", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector2 Unity::XR::CoreUtils::Vector2Extensions::Abs(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector2Extensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Vector2Extensions::Vector2Extensions()   {
}
