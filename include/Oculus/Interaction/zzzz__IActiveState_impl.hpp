#pragma once
// IWYU pragma private; include "Oculus/Interaction/IActiveState.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IActiveState::*)()>(&::Oculus::Interaction::IActiveState::get_Active)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::IActiveState*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::IActiveState::get_Active()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IActiveState*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
