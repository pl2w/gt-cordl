#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/StringEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__StringEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Utilities::StringEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Utilities::StringEvent::*)()>(&::Meta::WitAi::Utilities::StringEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e84af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Utilities::StringEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::StringEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Utilities::StringEvent* Meta::WitAi::Utilities::StringEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::StringEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::StringEvent::StringEvent()   {
}
