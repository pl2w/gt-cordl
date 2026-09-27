#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/MultiValueEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__MultiValueEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::MultiValueEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::MultiValueEvent::*)()>(&::Meta::WitAi::CallbackHandlers::MultiValueEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e9e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::MultiValueEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::CallbackHandlers::MultiValueEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::MultiValueEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::MultiValueEvent* Meta::WitAi::CallbackHandlers::MultiValueEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::MultiValueEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::MultiValueEvent::MultiValueEvent()   {
}
