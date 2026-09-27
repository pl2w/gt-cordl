#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityObjectUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityObjectUtils_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityObjectUtils.SafeDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::UnityObjectUtils::SafeDestroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b1b914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityObjectUtils*>(),
                        {"SafeDestroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline T GlobalNamespace::UnityObjectUtils::AsNull(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnityObjectUtils*>(),
                    {"AsNull", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::UnityObjectUtils::SafeDestroy(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityObjectUtils*>(),
                        {"SafeDestroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityObjectUtils::UnityObjectUtils()   {
}
