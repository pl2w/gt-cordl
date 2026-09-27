#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpChangedEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "GlobalNamespace/zzzz__LerpChangedEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LerpChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LerpChangedEvent::*)()>(&::GlobalNamespace::LerpChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a1d56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpChangedEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LerpChangedEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LerpChangedEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LerpChangedEvent* GlobalNamespace::LerpChangedEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LerpChangedEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LerpChangedEvent::LerpChangedEvent()   {
}
