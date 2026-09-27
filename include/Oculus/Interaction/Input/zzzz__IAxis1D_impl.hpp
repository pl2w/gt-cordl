#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IAxis1D.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::IAxis1D.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::IAxis1D::*)()>(&::Oculus::Interaction::Input::IAxis1D::Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::IAxis1D*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::IAxis1D*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Oculus::Interaction::Input::IAxis1D::Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IAxis1D*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
