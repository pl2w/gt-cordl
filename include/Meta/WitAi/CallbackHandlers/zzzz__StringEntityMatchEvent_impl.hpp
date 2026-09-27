#pragma once
// IWYU pragma private; include "Meta/WitAi/CallbackHandlers/StringEntityMatchEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/CallbackHandlers/zzzz__StringEntityMatchEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent::*)()>(&::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e9d0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::CallbackHandlers::StringEntityMatchEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent* Meta::WitAi::CallbackHandlers::StringEntityMatchEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::CallbackHandlers::StringEntityMatchEvent::StringEntityMatchEvent()   {
}
