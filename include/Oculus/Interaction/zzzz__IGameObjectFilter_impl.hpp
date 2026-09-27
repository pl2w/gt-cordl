#pragma once
// IWYU pragma private; include "Oculus/Interaction/IGameObjectFilter.hpp"
#include "Oculus/Interaction/zzzz__IGameObjectFilter_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IGameObjectFilter.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IGameObjectFilter::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::IGameObjectFilter::Filter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IGameObjectFilter*>(),
                    {::i2c::class_of<::Oculus::Interaction::IGameObjectFilter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::IGameObjectFilter::Filter(::UnityEngine::GameObject*  gameObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IGameObjectFilter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject);
}
