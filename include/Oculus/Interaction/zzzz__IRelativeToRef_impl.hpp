#pragma once
// IWYU pragma private; include "Oculus/Interaction/IRelativeToRef.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IRelativeToRef.get_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::IRelativeToRef::*)()>(&::Oculus::Interaction::IRelativeToRef::get_RelativeTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IRelativeToRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::IRelativeToRef*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::IRelativeToRef::get_RelativeTo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IRelativeToRef*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
