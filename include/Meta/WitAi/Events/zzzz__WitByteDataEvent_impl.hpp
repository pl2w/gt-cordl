#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/WitByteDataEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "Meta/WitAi/Events/zzzz__WitByteDataEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::WitByteDataEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::WitByteDataEvent::*)()>(&::Meta::WitAi::Events::WitByteDataEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e94e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::WitByteDataEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Events::WitByteDataEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::WitByteDataEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitByteDataEvent* Meta::WitAi::Events::WitByteDataEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::WitByteDataEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::WitByteDataEvent::WitByteDataEvent()   {
}
