#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/IVCBindingEvents.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__IVCBindingEvents_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::IVCBindingEvents.OnServiceNotAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::IVCBindingEvents::*)(::StringW, ::StringW)>(&::Oculus::Voice::Bindings::Android::IVCBindingEvents::OnServiceNotAvailable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>(),
                    {::i2c::class_of<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Voice::Bindings::Android::IVCBindingEvents::OnServiceNotAvailable(::StringW  error, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Bindings::Android::IVCBindingEvents*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message);
}
