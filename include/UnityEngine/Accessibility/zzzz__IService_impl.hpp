#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/IService.hpp"
#include "UnityEngine/Accessibility/zzzz__IService_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::IService.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::IService::*)()>(&::UnityEngine::Accessibility::IService::Stop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::IService*>(),
                    {::i2c::class_of<::UnityEngine::Accessibility::IService*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::IService::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Accessibility::IService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
