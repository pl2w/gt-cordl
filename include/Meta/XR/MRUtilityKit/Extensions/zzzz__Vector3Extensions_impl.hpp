#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Extensions/Vector3Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/Extensions/zzzz__Vector3Extensions_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Add)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f4f9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions.Subtract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Subtract)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f4f9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"Subtract", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions.Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Floor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f4f9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"Floor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions.FromVector2AndZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, float_t)>(&::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::FromVector2AndZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f51640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"FromVector2AndZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Add(::UnityEngine::Vector3  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Subtract(::UnityEngine::Vector3  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"Subtract", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Floor(::UnityEngine::Vector3  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"Floor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::FromVector2AndZ(::UnityEngine::Vector2  xy, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions*>(),
                        {"FromVector2AndZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, xy, z);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::Extensions::Vector3Extensions::Vector3Extensions()   {
}
