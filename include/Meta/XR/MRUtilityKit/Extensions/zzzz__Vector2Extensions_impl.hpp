#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Extensions/Vector2Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/Extensions/zzzz__Vector2Extensions_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions.Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Floor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f4f9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Floor", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions.Frac
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Frac)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f51c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Frac", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f51c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Abs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f51c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Floor(::UnityEngine::Vector2  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Floor", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Frac(::UnityEngine::Vector2  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Frac", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Add(::UnityEngine::Vector2  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Abs(::UnityEngine::Vector2  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::Extensions::Vector2Extensions::Vector2Extensions()   {
}
