#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Vector3Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__Vector3Extensions_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.Inverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::Inverse)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3f2b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Inverse", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.MinComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::MinComponent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3f2b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"MinComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.MaxComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::MaxComponent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3f2b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"MaxComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::Abs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3f2b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::Multiply)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3f2b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Multiply", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::Divide)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3f2b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Divide", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Vector3Extensions.SafeDivide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::Vector3Extensions::SafeDivide)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3f2b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"SafeDivide", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::Vector3Extensions::Inverse(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Inverse", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline float_t Unity::XR::CoreUtils::Vector3Extensions::MinComponent(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"MinComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vector);
}
inline float_t Unity::XR::CoreUtils::Vector3Extensions::MaxComponent(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"MaxComponent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::Vector3Extensions::Abs(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::Vector3Extensions::Multiply(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Multiply", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, scale);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::Vector3Extensions::Divide(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"Divide", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, scale);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::Vector3Extensions::SafeDivide(::UnityEngine::Vector3  value, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Vector3Extensions*>(),
                        {"SafeDivide", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, scale);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Vector3Extensions::Vector3Extensions()   {
}
