#pragma once
// IWYU pragma private; include "Oculus/Interaction/IMovementProvider.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IMovementProvider.CreateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::IMovementProvider::*)()>(&::Oculus::Interaction::IMovementProvider::CreateMovement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovementProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovementProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::IMovementProvider::CreateMovement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovementProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
