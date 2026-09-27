#pragma once
// IWYU pragma private; include "Oculus/Interaction/IDeltaTimeConsumer.hpp"
#include "Oculus/Interaction/zzzz__IDeltaTimeConsumer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IDeltaTimeConsumer.SetDeltaTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IDeltaTimeConsumer::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::IDeltaTimeConsumer::SetDeltaTimeProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IDeltaTimeConsumer*>(),
                    {::i2c::class_of<::Oculus::Interaction::IDeltaTimeConsumer*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::IDeltaTimeConsumer::SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IDeltaTimeConsumer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeProvider);
}
