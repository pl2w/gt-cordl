#pragma once
// IWYU pragma private; include "Oculus/Interaction/ITimeConsumer.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ITimeConsumer.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ITimeConsumer::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::ITimeConsumer::SetTimeProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ITimeConsumer*>(),
                    {::i2c::class_of<::Oculus::Interaction::ITimeConsumer*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ITimeConsumer::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ITimeConsumer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
