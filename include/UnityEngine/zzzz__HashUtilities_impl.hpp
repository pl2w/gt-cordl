#pragma once
// IWYU pragma private; include "UnityEngine/HashUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HashUtilities_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::HashUtilities.AppendHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Hash128>, ::by_ref<::UnityEngine::Hash128>)>(&::UnityEngine::HashUtilities::AppendHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5c40b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HashUtilities*>(),
                        {"AppendHash", {}, {::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HashUtilities.QuantisedMatrixHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Hash128>)>(&::UnityEngine::HashUtilities::QuantisedMatrixHash)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb5c4100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HashUtilities*>(),
                        {"QuantisedMatrixHash", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HashUtilities.QuantisedVectorHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Hash128>)>(&::UnityEngine::HashUtilities::QuantisedVectorHash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb5c42bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HashUtilities*>(),
                        {"QuantisedVectorHash", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::HashUtilities::AppendHash(::by_ref<::UnityEngine::Hash128>  inHash, ::by_ref<::UnityEngine::Hash128>  outHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HashUtilities*>(),
                        {"AppendHash", {}, {::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inHash, outHash);
}
inline void UnityEngine::HashUtilities::QuantisedMatrixHash(::by_ref<::UnityEngine::Matrix4x4>  value, ::by_ref<::UnityEngine::Hash128>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HashUtilities*>(),
                        {"QuantisedMatrixHash", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
inline void UnityEngine::HashUtilities::QuantisedVectorHash(::by_ref<::UnityEngine::Vector3>  value, ::by_ref<::UnityEngine::Hash128>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::HashUtilities*>(),
                        {"QuantisedVectorHash", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, hash);
}
// Ctor Parameters []
constexpr ::UnityEngine::HashUtilities::HashUtilities()   {
}
