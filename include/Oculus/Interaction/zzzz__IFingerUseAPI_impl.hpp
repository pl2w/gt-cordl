#pragma once
// IWYU pragma private; include "Oculus/Interaction/IFingerUseAPI.hpp"
#include "Oculus/Interaction/zzzz__IFingerUseAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IFingerUseAPI.GetFingerUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::IFingerUseAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::IFingerUseAPI::GetFingerUseStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IFingerUseAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::IFingerUseAPI*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Oculus::Interaction::IFingerUseAPI::GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IFingerUseAPI*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
