#pragma once
// IWYU pragma private; include "Oculus/Interaction/ICollidersRef.hpp"
#include "Oculus/Interaction/zzzz__ICollidersRef_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ICollidersRef.get_Colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (::Oculus::Interaction::ICollidersRef::*)()>(&::Oculus::Interaction::ICollidersRef::get_Colliders)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ICollidersRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::ICollidersRef*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Oculus::Interaction::ICollidersRef::get_Colliders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ICollidersRef*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(this, ___internal_method);
}
