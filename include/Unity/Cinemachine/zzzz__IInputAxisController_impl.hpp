#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisController.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisController_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::IInputAxisController.SynchronizeControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::IInputAxisController::*)()>(&::Unity::Cinemachine::IInputAxisController::SynchronizeControllers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::IInputAxisController*>(),
                    {::i2c::class_of<::Unity::Cinemachine::IInputAxisController*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::IInputAxisController::SynchronizeControllers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::IInputAxisController*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
