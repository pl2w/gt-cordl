#pragma once
// IWYU pragma private; include "Oculus/Interaction/IEvent.hpp"
#include "Oculus/Interaction/zzzz__IEvent_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IEvent.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::IEvent::*)()>(&::Oculus::Interaction::IEvent::get_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IEvent*>(),
                    {::i2c::class_of<::Oculus::Interaction::IEvent*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* Oculus::Interaction::IEvent::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IEvent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
