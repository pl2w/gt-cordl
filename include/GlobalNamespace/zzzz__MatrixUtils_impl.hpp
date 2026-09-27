#pragma once
// IWYU pragma private; include "GlobalNamespace/MatrixUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MatrixUtils_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatrixUtils.MultiplyXYZ3x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector4>)>(&::GlobalNamespace::MatrixUtils::MultiplyXYZ3x4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b0aaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"MultiplyXYZ3x4", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatrixUtils.MultiplyXYZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector4>)>(&::GlobalNamespace::MatrixUtils::MultiplyXYZ)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b0ab34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"MultiplyXYZ", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatrixUtils.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MatrixUtils::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b0ac08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"Clear", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatrixUtils.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MatrixUtils::Copy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b0ac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MatrixUtils::MultiplyXYZ3x4(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Vector4>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"MultiplyXYZ3x4", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, point);
}
inline void GlobalNamespace::MatrixUtils::MultiplyXYZ(::by_ref<::UnityEngine::Matrix4x4>  m, ::by_ref<::UnityEngine::Vector4>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"MultiplyXYZ", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, point);
}
inline void GlobalNamespace::MatrixUtils::Clear(::by_ref<::UnityEngine::Matrix4x4>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"Clear", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m);
}
inline void GlobalNamespace::MatrixUtils::Copy(::by_ref<::UnityEngine::Matrix4x4>  from, ::by_ref<::UnityEngine::Matrix4x4>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatrixUtils*>(),
                        {"Copy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatrixUtils::MatrixUtils()   {
}
