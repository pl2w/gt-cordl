#pragma once
// IWYU pragma private; include "GlobalNamespace/PrimaryButtonEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "GlobalNamespace/zzzz__PrimaryButtonEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrimaryButtonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrimaryButtonEvent::*)()>(&::GlobalNamespace::PrimaryButtonEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x579ec4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PrimaryButtonEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PrimaryButtonEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PrimaryButtonEvent* GlobalNamespace::PrimaryButtonEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PrimaryButtonEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrimaryButtonEvent::PrimaryButtonEvent()   {
}
