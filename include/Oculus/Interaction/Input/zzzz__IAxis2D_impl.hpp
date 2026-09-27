#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IAxis2D.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::IAxis2D.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::Input::IAxis2D::*)()>(&::Oculus::Interaction::Input::IAxis2D::Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::IAxis2D*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::IAxis2D*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Oculus::Interaction::Input::IAxis2D::Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::IAxis2D*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
