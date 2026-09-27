#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectExtensions_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectExtensions.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::ObjectExtensions::Destroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x567438c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectExtensions*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ObjectExtensions::Destroy(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectExtensions*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectExtensions::ObjectExtensions()   {
}
